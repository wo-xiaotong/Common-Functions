#!/usr/bin/env python
# -*- coding: utf-8 -*-
import subprocess

def linux_ping_LAN(netid,begin,end):
    command="/bin/sh"
    for i in range(begin,end):
        p=subprocess.Popen(command,shell=True,stdout=subprocess.PIPE,stdin=subprocess.PIPE)
        p.stdin.write("ping -c 1 -w 1 %s.%d\n" % (netid,i))
        p.stdin.close()
        p.wait()
        out = p.stdout.read()  
        
        if "100% packet loss" not in out:
            print "%s.%d ok!" % (netid,i)
        else:
            print "%s.%d failed!" % (netid,i)


def win_ping_LAN(netid,begin,end):
    command="cmd.exe"
    for i in range(begin,end):
        p=subprocess.Popen(command,shell=True,stdout=subprocess.PIPE,stdin=subprocess.PIPE)
        p.stdin.write("ping -n 1 -w 1 %s.%d\n") % (netid,i)
        p.stdin.close()
        p.wait()
        out = p.stdout.read()  
        
        if u"请求超时" not in out.decode("GBK"):
            print "%s.%d ok!" % (netid,i)
        else:
            print "%s.%d failed!" % (netid,i)


if __name__=="__main__":
    linux_ping_LAN("192.168.159",1,255)
