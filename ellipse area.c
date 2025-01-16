#include<stdio.h>

#define pi 3.1415
int main()
{
	float ma,mi;
	printf("Enter values of major axis and minor axis.");
	scanf("%f %f", &ma, &mi);
	printf("\n The area of ellipse is %f",pi*ma*mi);
	return 0;
	
}
