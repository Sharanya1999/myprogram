#!/bin/bash
age=56
echo "Enter your age"
read a
if [ $a -gt 56 ]
then 
echo "You are retired"
else
t=$(($age-$a))
echo "You will retire in "
echo $t
echo "years.."
fi
