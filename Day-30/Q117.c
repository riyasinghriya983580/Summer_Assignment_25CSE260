//Write a program to Create student record system using arrays and strings.
#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    char course[50];
    float marks;
};

int main()
{
    struct Student s[100];
    int n, i, choice, searchRoll, found = 0;

    printf("===== Student Record System =====\n");

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input Student Records
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Course: ");
        scanf(" %[^\n]", s[i].course);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    do
    {
        printf("\n\n===== MENU =====\n");
        printf("1. Display All Student Records\n");
        printf("2. Search Student by Roll Number\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\n----- Student Records -----\n");
                for(i = 0; i < n; i++)
                {
                    printf("\nStudent %d\n", i + 1);
                    printf("Roll Number : %d\n", s[i].roll);
                    printf("Name        : %s\n", s[i].name);
                    printf("Course      : %s\n", s[i].course);
                    printf("Marks       : %.2f\n", s[i].marks);
                }
                break;

            case 2:
                printf("Enter Roll Number to Search: ");
                scanf("%d", &searchRoll);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(s[i].roll == searchRoll)
                    {
                        printf("\nRecord Found\n");
                        printf("Roll Number : %d\n", s[i].roll);
                        printf("Name        : %s\n", s[i].name);
                        printf("Course      : %s\n", s[i].course);
                        printf("Marks       : %.2f\n", s[i].marks);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Student Record Not Found!\n");
                }
                break;

            case 3:
                printf("Exiting Student Record System...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}