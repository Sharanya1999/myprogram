#!/bin/bash
echo "Enter a number"
read a
rev=0
while [ $a -gt 0 ]
do 
dig=$(($a%10))
temp=$(($rev*10))
rev=$(($temp+$dig))
a=$(($a/10))
done
echo "The reverse is " $rev
