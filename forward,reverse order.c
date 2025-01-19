/*Write a C program to prompt the user to input 3 integer values and
print these values in forward and reversed order.*/
#include<stdio.h>
int main(){
	int a,b,c;
	
	printf("Enter three numbers:");
	scanf("%d %d %d", &a , &b, &c);
	
	printf("In forward order ");
	printf("%d %d %d", a , b, c);
	printf("In reversed order ");
	printf("%d %d %d", c, b, a);
}
