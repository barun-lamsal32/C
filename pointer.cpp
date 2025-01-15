#include<stdio.h>
int main (){
	int a,b,c,*x,*y,*z;
	printf("Enter three numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	x=&a;
	y=&b;
	z=&c;
	if(*x>*y && *x>*z){
		printf("%d is largest",*x);
	}
else if (*y>*z && *y>*x){
	printf("%d is largest",*y);
}
else {
	printf("%d is largest",*z);
}
return 0;
}
