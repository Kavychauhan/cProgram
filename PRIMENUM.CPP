#include<stdio.h>
#include<conio.h>
void main()
{
	int n,abc=0,i;
	clrscr();

	printf("Enter the number to check this number is prime or not :");
	scanf("%d",&n);
	if(n==0)
	{
		printf("0 is neither prime or composite number :");
	}
	else if(n==1)
	{
		printf("1 is neither prime or composite number :");
	}
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		abc++;
	}
	if(abc && n!=0 && n!=1)
	{
		printf("%d is composite number ",n);
	}
	else if(n!=0 && n!=1)
	{
		printf("%d is prime number ",n);
	}
	getch();
}