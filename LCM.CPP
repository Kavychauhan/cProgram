#include<stdio.h>
#include<conio.h>
void main()
{
	int num1,num2,lcm,a=1;
	clrscr();

	printf("Enter the first number :");
	scanf("%d",&num1);
	printf("Enter the second number :");
	scanf("%d",&num2);

	lcm=(num1>num2) ? num1:num2;

	while(a)
	{
		if(lcm%num1==0 && lcm%num2==0)
		{
			printf("LCM is %d and %d = %d",num1,num2,lcm);
			break;
		}
		++lcm;
	}
	getch();
}