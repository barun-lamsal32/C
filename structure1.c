#include <stdio.h>
#include <string.h>


#define MAX_STUDENTS 5


struct student {
    char name[50];
    char address[100];
    int id;
};


void sortStudents(struct student students[], int n) {
    struct student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(students[i].name, students[j].name) > 0) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

int main() {
    struct student students[MAX_STUDENTS];

   
    printf("Enter details of %d students:\n", MAX_STUDENTS);
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Enter name: ");
        scanf(" %[^"]s", students[i].name);
        printf("Enter address: ");
        scanf(" %[^"]s", students[i].address);
        printf("Enter ID: ");
        scanf("%d", &students[i].id);
    }

    
    sortStudents(students, MAX_STUDENTS);

  
    printf("\nSorted Student Details:\n");
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Name: %s, Address: %s, ID: %d\n", students[i].name, students[i].address, students[i].id);
    }

    return 0;
}
