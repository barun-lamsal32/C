#include <stdio.h>


int sumNatural(int n) {
    if (n == 0) 
        return 0;  
    else 
        return n + sumNatural(n - 1);  
}

int main() {
    int num = 5;
    printf("Sum of first %d natural numbers is %d\n", num, sumNatural(num));
    return 0;
}
