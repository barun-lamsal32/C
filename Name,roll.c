#include<stdio.h>
#include<conio.h>
int main()
{
	char name[20];
	int roll ;
	printf("Enter your name and roll number");
	scanf("%s %d",name, &roll);
	printf("%s is your name and %d is your roll number.",name, roll);
return 0;
}