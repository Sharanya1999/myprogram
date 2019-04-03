 #include<stdio.h>
int push();
int pop();
int display();
int a[20],n,top=-1;
int main()
{

int i,c;
printf("\n Enter the number of elements in the STACK :");
scanf("%d",&n);
do
{

printf("\n THE STACK OPERATIONS ARE:");
printf("\n 1.PUSH");
printf("\n 2.POP");
printf("\n 3.DISPLAY");
printf("\n 4.EXIT");
printf("\n Enter your choice :");
scanf("%d",&c);
switch(c)
{

case 1:push();
break;
case 2:pop();
break;
case 3:display();
break;
default:printf("INVALID OPERATION!...........");
}
}while(c<4);
}
int push()
{
int i,p;
if(top==(n-1))
{
	printf("STACK FULL....");
}
else
{
	top++;
	printf("Enter the number to be pushed :\n");
	scanf("%d",&p);
	a[top]=p;


}
return 0;

}
int pop()
{
	int i;
	if(top==-1)
	{
		printf("\n Stack Empty!!!");
	}
	else
	{
		printf("The deleted element is : %d",a[top]);
		top--;
	}
return 0;

}
int display()
{
	int i;
	printf("ELEMENTS ARE:\n");
        for(i=top;i>=0;i--)
        {
                printf("%d \n",a[i]);
        }

}
