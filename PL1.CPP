#include<stdio.h>
#include<conio.h>
void main()
{
	int marks[10];
	int i,sum=0;
	float avg;
	clrscr();
	printf("Enter the marks of 10 students :\n");
	for(i=0;i<10;i++)
	{
		printf("Student %d :",i+1);
		scanf("%d",&marks[i]);
	}
	for(i=0;i<10;i++)
	{
		sum +=marks[i];
	}
	avg=(float)sum/10;
	printf("The average mark of all 10 students is %.2f\n",avg);
getch();
}
