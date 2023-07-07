#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10];
	int n,i,pos,val;
	clrscr();
	printf("Enter the number of elements in the array :\n");
	scanf("%d",&n);
	printf("Enter %d elemnets for the array :\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the position where you want to insert the element :\n");
	scanf("%d",&pos);
	printf("Enter the value you want to insert :\n");
	scanf("%d",&val);
	for(i=n-1;i>=pos;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[pos]=val;
	printf("Array after inserting the value :\n");
	for(i=0;i<n+1;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
getch();
}
