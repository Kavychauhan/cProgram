#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,rev=0,rem;
	clrscr();

	printf("Enter any number to find it's reverse number ::");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;
	}
	printf("\n %d",rev);
	getch();
}