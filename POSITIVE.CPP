#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();

	printf("Enter the value of a :");
	scanf("%d",&a);

	switch(a>0)
	{
		case 1:
			printf("%d is Positive number :",a);
			break;
		case 0:
		switch(a==0)
		{
			case 1:
				printf("This nuber is zero :",a);
				break;
			case 0:
				printf("%d is nagetive number :",a);
				break;
		}
	}
	getch();
}