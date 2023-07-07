#include<stdio.h>
#include<conio.h>
void main()
{
	int num,rem,sum=0,i;
	clrscr();

	printf("Enter the number :");
	scanf("%d",&num);

	for(i=1;i<num;i++)
	{
		rem=num%i;
		if(rem==0)
		{
			sum=sum+i;
		}
	}
	if(sum==sum)
	{
		printf("%d is a perfect number :",num);
	}
	else
	{
		printf("%d is not a perfect number :",num);
	}
	getch();
}