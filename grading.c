#include<stdio.h>
main()
{
	printf("enter marks: ");
	int marks=0;
	scanf("%d",&marks);
	if(marks>=85 && marks<100)
	{
		printf("Grade A");
	}
	else if(marks>=70 && marks<85)
	{
		printf("Grade B");
	}
	else if(marks>=55 && marks<70)
	{
		printf("Grade C");
	}
	else if(marks>=40 && marks<55)
	{
		printf("Grade D");
	}
	else
	{
		printf("Grade F");
	}	
}
	

