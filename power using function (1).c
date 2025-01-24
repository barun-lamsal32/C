#include<stdio.h>
int power(int a,int b)
{
	if (b==0) {
		return 1;
	}
	else {
		return a*pow(a,b-1);
	}
}
int main () {
int a,b,c;
printf("Enter a and b");
scanf("%d %d",&a,&b);
c=power(a,b);
printf("The value of %d and %d is %d",a,b,c);
}
