#include<stdio.h>
#include<process.h>
void push();
void pop();
void display();
int s[100],bott[10],lim[10],top[10];
void main()
{
	int max,n,i,c,size,ch;
	printf("Enter the maximum size of stack :");
	scanf("%d".&max);
	printf("\n Enter the number of stacks :");
	scanf("%d",&n);
	size=max/n;
	bott[0]=-1;
	lim[0]=bott[0]+size;
	for(i=1;i<n;i++)
	{
		bott[i]=bott[i-1]+size;
	}
	for(i=1;i<n;i++)
	{
		lim[i]=lim[i-1]+size;
	}
	for(i=0;i<n;i++)
	{
		top[i]=bott[i];
	}
	printf("\nEnter the stack to be operated :");
	scanf("%d",&c);
	do
	{
		printf("\nThe STACK operations are:");
		printf("\n1.PUSH");
		printf("\n2.POP");
		printf("\n3.DISPLAY");
		printf("\n4.EXIT");
		printf("\nEnter your choice :");
		scanf("%d",&ch);
		switch(c)
		{

			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:display();
			break;
			case 4:exit(0);
			default:printf("INVALID OPERATION!...........\n");

		}
	}while(c<4);
	void push()
	{
		if(top[ch]==lim[ch])
		{
			printf("\nSTACK Full!!!");
		}
		else
		{
			
		}
	}
}
