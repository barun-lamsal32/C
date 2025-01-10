#include<stdio.h>
int main (){
int n[5],a[5],d[5],i,temp,j;
printf("Enter 5 numbers: \n");
for(i=0;i<5;i++)
{
scanf("%d",&n[i]);
a[i]=n[i];
d[i]=n[i];
}


for(i=0;i<5;i++)
{
    for(j=i+1;j<5;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;

        }
    }
}

for(i=0;i<5;i++)
{
    for(j=i+1;j<5;j++)
    {
        if(d[i]<d[j])
        {
            temp=d[i];
            d[i]=d[j];
            d[j]=temp;

        }
    }
}   
printf("The numbers in ascending order are: ");
for(i=0;i<5;i++)
{
    printf("%d\t",a[i]);
}
printf("\n");

printf("The numbers in descending order are: ");
for(i=0;i<5;i++)
{
    printf("%d\t",d[i]);
}
return 0;
}


