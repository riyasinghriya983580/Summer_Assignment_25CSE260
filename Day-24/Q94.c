// Q94. Compress a String

#include <stdio.h>

int main() {
    char str[100];

    printf("Enter string: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++) {
        int count = 1;

        while(str[i] == str[i+1]) {
            count++;
            i++;
        }

        printf("%c%d", str[i], count);
    }

    return 0;
}