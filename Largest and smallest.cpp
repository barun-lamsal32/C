#include<stdio.h>
int main()
{
float num[10],great,small,temp;
int i;
printf("Enter 10 numbers: \n");
for(i=0;i<10;i++)
{
scanf("%f",&num[i]);
}
great=num[0];
small=num[1];
for(i=0;i<10;i++)
{
if(great<num[i])
{
temp=num[i];
num[i]=great;
great=temp;
}
}
for(i=0;i<10;i++)
{
if(small>num[i])
{
temp=num[i];
num[i]=small;
small=temp;
}
}



printf("The largest number is %.2f\n",great);
printf("The smallest number is %.2f",small);
return 0;

}
