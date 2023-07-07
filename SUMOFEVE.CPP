 #include<stdio.h>
 #include<conio.h>
 void main()
 {
	int num,i,sum=0;
	clrscr();

	printf("Enter the any number :");
	scanf("%d",&num);

	for(i=0;i<=num;i++)
	{
		sum+=i;
	}
	printf("\nSum of even number = %d",sum);

	getch();
}