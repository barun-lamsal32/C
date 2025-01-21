#include <stdio.h>

int main() {
    char name[50], address[100];
    int age;
    float weight, height;

    printf("Enter your name: ");
    fgets(name, 50, stdin); 

    printf("Enter your address: ");
    fgets(address, 100, stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your weight (in kg): ");
    scanf("%f", &weight);

    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    printf("\nYour Information:\n");
    printf("Name: %s", name);
    printf("Address: %s", address);
    printf("Age: %d years\n", age);
    printf("Weight: %.2f kg\n", weight);
    printf("Height: %.2f meters\n", height);

    return 0;
}
