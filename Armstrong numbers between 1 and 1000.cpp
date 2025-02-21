//C program to display armstrong number from 1 t0 1000

#include<stdio.h>
#include<math.h>

void arms(int n)
{
	int org,sum=0,r;
	org=n;
	while(n!=0)
	{
	r=n%10;
	sum+=pow(r,3);
	n=n/10;	
	}
	
	if(sum==org)
	{
		printf("%d ",org);
	}

}

int main()
{
	int i;
	printf("The armstrong numbers between 1 and 1000 are: \n");
	for(i=0;i<1000;i++)
	{
		arms(i);
	}
}
