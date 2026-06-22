// Q89. First Non-Repeating Character

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};

    printf("Enter string: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++)
        freq[(int)str[i]]++;

    for(int i = 0; str[i] != '\0'; i++) {
        if(freq[(int)str[i]] == 1) {
            printf("First Non-Repeating: %c", str[i]);
            break;
        }
    }

    return 0;
}