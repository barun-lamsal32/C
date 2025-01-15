#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int i, j;
char **s, *temp;


s = (char**)calloc(5, sizeof(char*));



for(i = 0; i < 5; i++) {
    s[i] = (char*)calloc(20, sizeof(char));

}


temp = (char*)calloc(20, sizeof(char));



printf("Enter 5 strings:\n");
for(i = 0; i < 5; i++) {
    scanf("%s", s[i]);
}

for(i = 0; i < 5; i++) {
    for(j = i + 1; j < 5; j++) {
        if (strcmp(s[i], s[j]) > 0) {
            strcpy(temp, s[i]);
            strcpy(s[i], s[j]);
            strcpy(s[j], temp);
        }
    }
}


printf("Sorted: ");
for(i = 0; i < 5; i++) {
    printf("%s ", s[i]);  
}
printf("\n");


return 0;
}
