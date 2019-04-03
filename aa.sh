#!/bin/bash
echo "Enter the first number"
read a
echo "Enter the second number"
read b
while((1))
do
echo "1.ADDITION"
echo "2.SUBTRACTION"
echo "3.MULTIPLICATION"
echo "4.DIVISION"
echo "5.EXIT"
echo "Enter your choice :"
read ch
case $ch in
1)sum=$(($a+$b))
echo "The sum is : " $sum
;;
2)sub=$(($a-$b))
echo "The difference is : " $sub
;;
3)pdt=$(($a*$b))
echo "The product is : " $pdt
;;
4)quo=$(($a/$b))
echo "The quotient is : " $quo
;;
5)exit 1 ;;
esac
done
