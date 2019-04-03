#!/bin/bash
echo "OS:" 
uname
lsb_release -a
echo "CPU info"
lscpu
echo "Memory info"
free
echo "Hard disk info"
hdparm -a  
echo "Variable shells"
cat /etc/shells


