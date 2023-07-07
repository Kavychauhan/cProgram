#include<stdio.h>
#include<conio.h>
void main()
{
	int rev=0,rem,n,temp;
	clrscr();

	printf("Enter the any number :");
	scanf("%d",&n);
	temp=n;

	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("Reverse number is : %d",rev);
	if(temp==rev)
	{
		printf("\nThis number is pailedrom...");
	}
	else
	{
		printf("\nThis number is not pailedrom...");
	}
	getch();
}