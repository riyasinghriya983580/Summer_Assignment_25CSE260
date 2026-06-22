// Q91. Check Anagram Strings

#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    int freq[256] = {0};

    printf("Enter first string: ");
    gets(a);

    printf("Enter second string: ");
    gets(b);

    for(int i = 0; a[i]; i++)
        freq[(int)a[i]]++;

    for(int i = 0; b[i]; i++)
        freq[(int)b[i]]--;

    int flag = 1;

    for(int i = 0; i < 256; i++) {
        if(freq[i] != 0) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Anagram");
    else
        printf("Not Anagram");

    return 0;
}