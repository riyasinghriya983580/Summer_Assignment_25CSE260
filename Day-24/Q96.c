// Q96. Remove Duplicate Characters

#include <stdio.h>

int main() {
    char str[100];
    int seen[256] = {0};

    printf("Enter string: ");
    gets(str);

    printf("Result: ");

    for(int i = 0; str[i] != '\0'; i++) {
        if(!seen[(int)str[i]]) {
            printf("%c", str[i]);
            seen[(int)str[i]] = 1;
        }
    }

    return 0;
}