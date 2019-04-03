#!/bin/bash
u="admin"
p="1234"
echo "Enter your username"
read user
echo "Enter password"
read pass
if [[ "$user" == "$u" && "$pass" == "$p" ]]
then
echo "Login successful...."
else
echo "Invalid user..."
fi
