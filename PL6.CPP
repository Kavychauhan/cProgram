#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10];
	int n,i,pos;
	clrscr();
	printf("Enter array :\n");
	scanf("%d",&n);
	printf("Enter %d element for array :\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the position you want delete :\n ");
	scanf("%d",&pos);
	for(i=pos;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	n--;
	printf("Array after deleting the ele... :\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
getch();
}
