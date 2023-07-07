#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50],i,sum=0;
	clrscr();


	for(i=1;i<=50;++i)
	{
			printf("\nEnter the array a[%d] ::",i);
			 scanf("%d",&a[50]);
			 sum+=a[50];
	}
	printf("The total sum is :: %d",sum);
	printf("\nThe total avg is :: %d",sum/50);
	getch();
}