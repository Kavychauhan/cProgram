#include<stdio.h>
#include<conio.h>
void main()
{
	int base,power,i,ans=1;
	clrscr();

	printf("Enter the Base :");
	scanf("%d",&base);
	printf("Entre the Power :");
	scanf("%d",&power);

	for(i=1;i<=power;i++)
	{
		ans*=base;
	}
	printf("%d ^ %d = %d",base,power,ans);
	getch();
}