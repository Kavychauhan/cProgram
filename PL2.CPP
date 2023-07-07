#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[5]={1,2,3,4,5};
	int i;
	clrscr();
	printf("Array elements are :");
	for(i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	printf("enter %d elements for the array :\n",5);
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array elements after input are :\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
getch();
}
