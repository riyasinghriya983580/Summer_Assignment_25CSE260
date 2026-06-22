// Q95. Find Longest Word

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], word[50], longest[50];
    int max = 0, len = 0, k = 0;

    printf("Enter sentence: ");
    gets(str);

    for(int i = 0; ; i++) {
        if(str[i] != ' ' && str[i] != '\0') {
            word[k++] = str[i];
        } else {
            word[k] = '\0';
            len = strlen(word);

            if(len > max) {
                max = len;
                strcpy(longest, word);
            }

            k = 0;

            if(str[i] == '\0')
                break;
        }
    }

    printf("Longest Word = %s", longest);

    return 0;
}