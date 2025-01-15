#include <stdio.h>

int main() {
	
int n,i;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{scanf("%d",&arr[i]);
}
int a=sum(arr,n);
printf("%d",a);
}
int sum(int *arr,int n)
{
int i,summ=0;
for(i=0;i<n;i++)
{
summ+=*(arr+i);
}
return summ;
}
	
