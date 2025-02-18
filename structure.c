#include <stdio.h>


struct Address {
    char city[20];
};

struct Person {
    char name[20];
    struct Address address;
};

int main() {
    struct Person person = {"Alice", {"Paris"}};
    
    
    printf("Name: %s\n", person.name);
    printf("City: %s\n", person.address.city);
    
    return 0;
}
