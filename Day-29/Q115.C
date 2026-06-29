//Write a program to Create menu-driven string operations system
// Write a program to Create menu-driven string operations system.

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int choice;

    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    do
    {
        printf("\n===== STRING MENU =====\n");
        printf("1. Display String\n");
        printf("2. Find Length\n");
        printf("3. Copy String\n");
        printf("4. Concatenate String\n");
        printf("5. Compare Strings\n");
        printf("6. Reverse String\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice)
        {
            case 1:
                printf("String: %s\n", str1);
                break;

            case 2:
                printf("Length = %lu\n", strlen(str1));
                break;

            case 3:
                strcpy(str2, str1);
                printf("Copied String: %s\n", str2);
                break;

            case 4:
                printf("Enter another string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';

                strcat(str1, str2);
                printf("Concatenated String: %s\n", str1);
                break;

            case 5:
                printf("Enter another string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';

                if(strcmp(str1, str2) == 0)
                    printf("Strings are Equal.\n");
                else
                    printf("Strings are Not Equal.\n");
                break;

            case 6:
            {
                int i, len = strlen(str1);

                printf("Reversed String: ");
                for(i = len - 1; i >= 0; i--)
                    printf("%c", str1[i]);

                printf("\n");
                break;
            }

            case 7:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 7);

    return 0;
}