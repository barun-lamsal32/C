/*Write a program to take input of name, rollno and marks obtained
by a student in 5 subjects each have its 100 full marks and display
the name, rollno with percentage score secured*/

#include<stdio.h>
#include<conio.h>
int main()
{
	char name[50];
	int roll,m1,m2,m3,m4,m5;
	printf("Enter the name and roll number: ");
	scanf("%s %d",name, &roll);
	printf("Enter the marks scored in five subjects: ");
	scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
	printf("\n %s of roll number %d scored %d %d %d %d %d in five subjects.",name, roll, m1, m2, m3,m4,m5);
	getch();
	return 0;
	
}
