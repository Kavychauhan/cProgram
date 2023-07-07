#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();

	printf("Enter the value of a :");
	scanf("%d",&a);
	printf("Enter the value of b :");
	scanf("%d",&b);

	switch(a>b)
	{
		case 0:
			printf("%d is maximum number :",b);
			break;
		case 1:
			printf("%d is maximum number :",a);
			break;
	}
	getch();
}
