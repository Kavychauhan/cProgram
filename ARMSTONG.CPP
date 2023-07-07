#include<stdio.h>
#include<conio.h>
void main()
{
	int i,r,n,sum=0;
	clrscr();

	printf("Enter number to check if is armstong or not :");
	scanf("%d",&n);
	for(i=n;i>0;)
	{
		r=i%10;
		sum=sum+(r*r*r);
		i=i%10;
	}
	if(n==sum)
	{
		printf("\n%d = %d \n Given number is armstong number ",n,sum);
	}
	else
	{
		printf("\n%d = %d \n Given number is not armstong number",n,sum);
	}
	getch();
}