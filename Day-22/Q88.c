// Q88. Remove Spaces from String

#include <stdio.h>

int main() {
    char str[100], result[100];
    int j = 0;

    printf("Enter string: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ')
            result[j++] = str[i];
    }

    result[j] = '\0';

    printf("After removing spaces: %s", result);

    return 0;
}