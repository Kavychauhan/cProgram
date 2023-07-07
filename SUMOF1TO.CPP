#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i,j,prime,sum=0;
	clrscr();

	printf("Enter the number :");
	scanf("%d",&a);

	for(i=2;i<=a;i++)
	{
		prime=1;
		for(j=2;j<=(i/2);++j)
		{
			if(i%j==0)
			{
				prime=0;
				break;
			}
		}
		if(prime==1)
		sum+=i;
	}
	printf("Sum of all Prime number between 1 to %d : %d",a,sum);
	getch();
}