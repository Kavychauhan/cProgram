#include<stdio.h>
#include<conio.h>
void main()
{
	int i,originalnum,num,lastdigit,sum,fact;
	clrscr();

	printf("Enter the any number :");
	scanf("%d",&num);

	originalnum=num;
	sum=0;
	while(num>0)
	{
		lastdigit=num%10;
		fact=1;
		for(i=1;i<=lastdigit;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		num=num/10;
	}
	if(sum==originalnum)
	{
		printf("%d is Strong number :",originalnum);
	}
	else
	{
		printf("%d is not Strong number :",originalnum);
	}
	getch();
}