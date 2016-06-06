#!/usr/bin/env python
# -*- coding: utf-8 -*-
import subprocess

def ping_LAN(ip,begin,end):
    cmd="cmd.exe"
    print("----------------begin----------------")
    for i in range(begin,end):
        p=subprocess.Popen(cmd,shell=True,stdout=subprocess.PIPE,stdin=subprocess.PIPE)
        p.stdin.write("ping -n 1 -w 1 %s.%d\n" % (ip,i)) #windows
        p.stdin.close()
        p.wait()
        out = p.stdout.read()  
        
        if u"请求超时" not in out.decode("GBK"):
            print "ip.%d ok!" % i
        else:
            print "ip.%d failed!" % i
    print "----------------end----------------"


if __name__=="__main__":
    pingLAN("192.168.159",1,255)