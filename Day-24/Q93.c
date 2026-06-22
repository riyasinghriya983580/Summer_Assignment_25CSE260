// Q93. Check String Rotation

#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100], temp[200];

    printf("Enter string A: ");
    gets(a);

    printf("Enter string B: ");
    gets(b);

    strcpy(temp, a);
    strcat(temp, a);

    if(strstr(temp, b))
        printf("Rotation");
    else
        printf("Not Rotation");

    return 0;
}