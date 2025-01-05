#include<stdio.h>
int main (){
    int i,j,n;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=n;i>=0;i--) {
    printf("%d\n",i); }

    for(j=0;j<=n;j++){
    printf("%d",j); }
    return 0;
}

