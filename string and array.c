#include <stdio.h>
#include <string.h>

int main() {
    int i, l = 0, ch = 0, w = 1; 
    char s[100];
    
    printf("Enter sentences: ");
    scanf("%[^\n]%*c", s); 
    l = strlen(s); 
    for (i = 0; i < l; i++) {
        if (s[i] != ' ') {
            ch++; 
        }
        if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n') {
            if (i > 0 && s[i-1] != ' ' && s[i-1] != '\t' && s[i-1] != '\n') {
                w++; 
            }
        }
    }

    
    if (l > 0 && s[l-1] != ' ' && s[l-1] != '\t' && s[l-1] != '\n') {
        w++;
    }

    
    printf("Number of characters: %d\n", ch);
    printf("Number of words: %d\n", w);

    return 0;
}

