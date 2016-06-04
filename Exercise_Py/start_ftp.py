import win32serviceutil
import win32service
import win32event
import time
import socket
import subprocess
import logging
import os  
import inspect  
    
ftp_path="C:\\ftp\\Ftpconsole.exe"

########################################################################################
##### create a win32 service to check weather the ftp server and http server is running#
##### if it is closed,log to ftp.log after open them                                   #
########################################################################################





def is_port_open(ip,port):    
    is_open=True
    sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    try:
        sock.connect((ip,port))
        sock.shutdown(2)
        sock.close()
    except:
        is_open=False
    return is_open

def open_ftp_after_kill():
    command="taskkill /F /IM ftpbasicsvr.exe"
    os.system(command)
    command="taskkill /F /IM FtpConsole.exe"
    os.system(command)
    subprocess.Popen(ftp_path)

def open_httpserver():
    os.chdir("c:\\ftp\\anonymous")
    command="start /b python -m SimpleHTTPServer 8000"
    os.system(command)

class win32test(win32serviceutil.ServiceFramework): 
    _svc_name_ = "PythonFtp"   
    _svc_display_name_ = "PythonFtp"  
    _svc_description_ = "PythonFtp"  
    
    def __init__(self, args): 
        win32serviceutil.ServiceFramework.__init__(self, args) 
        self.hWaitStop = win32event.CreateEvent(None, 0, 0, None)
        self.is_alive=True
        self.logger=self._getLogger()
        

    def _getLogger(self):
        logger = logging.getLogger('[PythonFtp]')  
                  
        this_file = inspect.getfile(inspect.currentframe())  
        dirpath = os.path.abspath(os.path.dirname(this_file))  
        handler = logging.FileHandler(os.path.join(dirpath, "ftp.log"))  
                  
        formatter = logging.Formatter('%(asctime)s %(name)-12s %(levelname)-8s %(message)s')  
        handler.setFormatter(formatter)  
                  
        logger.addHandler(handler)  
        logger.setLevel(logging.INFO)  
                  
        return logger

        
    def SvcDoRun(self):
        self.logger.error("svc do run....") 
        while self.is_alive:
            if is_port_open("127.0.0.1",21) is False: 
                open_ftp_after_kill()
                self.logger.error("ftp open")
            if is_port_open("127.0.0.1",8000) is False:
                open_httpserver()
                self.logger.error("http server open")
            time.sleep(30)
                
            
    def SvcStop(self):
        self.logger.error("svc do stop....") 
        self.ReportServiceStatus(win32service.SERVICE_STOP_PENDING) 
        win32event.SetEvent(self.hWaitStop)
        self.is_alive=False
    
if __name__=='__main__':
    win32serviceutil.HandleCommandLine(win32test)
 
