/*Write a program to swap two variables values with and without
using third variables.*/

#include<stdio.h>
int main(){
    int a, b;
    
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Swapping using a third variable
    int x;
    x = a; 
    a = b;     
    b = x;  

    printf("\nAfter swapping with a third variable:\n");
    printf("a = %d, b = %d\n", a, b);
    x = a; 
    a = b;     
    b = x;  
    // Swapping without using a third variable
    a = a + b; 
    b = a - b; 
    a = a - b;

    printf("\nAfter swapping without using a third variable:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
