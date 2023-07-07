#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();

	printf("Enter the value of a :");
	scanf("%d",&a);

	switch(a%2==0)
	{
		case 1:
			printf("%d is even number :",a);
			break;
		case 0:
			printf("%d is odd number :",a);
			break;
	}
	getch();
}