#include<stdio.h>
int main () {
	int num[8],sum=0,avg,i;
	printf("Enter a numbers");
	for(i=0;i<8;i++){
	scanf("%d",&num[i]);
	sum=sum+num[i];
}
avg=sum/8;
printf("Sum is %d",sum);
printf("\nAVERAGE IS %d",avg);
return 0;
}
