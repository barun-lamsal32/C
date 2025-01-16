#include<stdio.h>

int main()
{
	float p,t,r;
	printf("Enter values of principle, rate and time.");
	scanf("%f %f %f", &p, &t, &r);
SI=(p*t*r)/100;
	printf("\n The Simple Interest is %f",SI);
	return 0;
	
}
