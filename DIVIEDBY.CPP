#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();

	printf("Numbers are between 100 to 200 divded by 7  ::");
	for(i=101;i<200;i++)
	{
		if(i%7==0)
		{
			printf("\n%d",i);
		}
	}
	getch();
}