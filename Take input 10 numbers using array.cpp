#include<stdio.h>
int main () {
	float a[10];
	int i;
	printf("Enter ten numbers:\n");
	for(i=0;i<10;i++){
		scanf("%f",&a[i]);
	}
	for(i=0;i<10;i++){
	
	printf("Numbers is %f\n",a[i]);
}
	return 0;
}
