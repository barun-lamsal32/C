/*Write a program to calculate simple and compound interest.*/
#include<stdio.h>
int main(){
	
	float p,t,r,si,ci;
	printf("Enter values of principle, rate and time.");
	scanf("%f %f %f", &p, &t, &r);
	
	si = (p*t*r)/100;
    ci = p * pow((1 + r / 100), t) - p;
	
	printf("\n The Simple Interest is %f",si);
	printf("\n The Compound Interest is %f",ci);
	
	getch();
	return 0;
	
	
	
}
