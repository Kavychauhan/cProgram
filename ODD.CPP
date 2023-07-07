#include<stdio.h>
#include<conio.h>
void main()
{
	int num,i;
	clrscr();

	printf("Enter the any number :");
	scanf("%d",&num);

	for(i=1;i<=num;i++)
	{
		if(i%2!=0)
	{
	printf("\nThis number are odd : %d",i);
	}
	}
	getch();
}