#include<stdio.h>
#include<conio.h>
void main()
{
	int arr1[5];
	int arr2[5];
	int i;
	clrscr();
	printf("Enter %d elements for the first array :\n",5);
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<5;i++)
	{
		arr2[i]=arr1[i];
	}
	printf("Elements of the second array after copying are :\n");
	for(i=0;i<5;i++)
       {
		printf("%d\t",arr2[i]);
       }
       printf("\n");
getch();
}
