 #include<stdio.h>
 #include<conio.h>
 void main()
 {
	int num,i,sum=0;
	clrscr();

	printf("Enter the any number :");
	scanf("%d",&num);

	for(i=1;i<=num;i++)
	{
		sum+=i;
	}
	printf("\nSum = %d",sum);

	getch();
}