#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[5];
	int i;
	clrscr();

	printf("Enter %d elements for the array :\n",5);
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Negative elements in the array are :\n");
	for(i=0;i<5;i++)
	{
		if(arr[i]<0)
		{
			printf("%d",arr[i]);
		}
	}
	printf("\n");
getch();
}
