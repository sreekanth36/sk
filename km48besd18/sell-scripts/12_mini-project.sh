: '## Mini Project - shell programming

Write a network monitor application server_monitor.sh which show the below information

OS name
Architecture version
Kernel version
Internet status
IP Address
Memory Usage
Disk file systems usage
system uptime '

#!/bin/sh

echo -n "OS Name: "; uname
echo -n "Architecture version: " ; arch
echo -n "Kernel version: " ; uname -r 
echo -n "Internet status: " ; ping -c 1 www.google.com
echo -n "IP Address: " ; hostname -i
echo  "Memory Usage:" ; free -h
echo "Disk file systems usage:" ; df -h
echo -n "system uptime:"; uptime 
