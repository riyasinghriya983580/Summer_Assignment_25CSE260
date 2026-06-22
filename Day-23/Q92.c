// Q92. Maximum Occurring Character

#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};

    printf("Enter string: ");
    gets(str);

    for(int i = 0; str[i]; i++)
        freq[(int)str[i]]++;

    int max = 0;
    char result;

    for(int i = 0; str[i]; i++) {
        if(freq[(int)str[i]] > max) {
            max = freq[(int)str[i]];
            result = str[i];
        }
    }

    printf("Max Occurring Character = %c", result);

    return 0;
}