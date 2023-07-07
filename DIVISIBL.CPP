#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();

	printf("Enter the number :");
	scanf("%d",&a);

	if(a%5==0)
	{
		printf("%d Enter number can be divisible by 5 :",a);
	}
	else if(a%11==0)
	{
		printf("%d Enter number can be divisible by 11 :",a);
	}
	else
	{
		printf("%d Number can not be divisible by 5 or 11 :",a);
	}
	getch();
}