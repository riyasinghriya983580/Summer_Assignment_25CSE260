#include <stdio.h>

int main() {
    char name[50];
    int rollNo;
    float sub1, sub2, sub3, sub4, sub5;
    float total, percentage;

    printf("===== Marksheet Generation System =====\n");

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter Marks of Subject 1: ");
    scanf("%f", &sub1);

    printf("Enter Marks of Subject 2: ");
    scanf("%f", &sub2);

    printf("Enter Marks of Subject 3: ");
    scanf("%f", &sub3);

    printf("Enter Marks of Subject 4: ");
    scanf("%f", &sub4);

    printf("Enter Marks of Subject 5: ");
    scanf("%f", &sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = total / 5;

    printf("\n========== MARKSHEET ==========\n");
    printf("Student Name : %s\n", name);
    printf("Roll Number  : %d\n", rollNo);
    printf("Subject 1    : %.2f\n", sub1);
    printf("Subject 2    : %.2f\n", sub2);
    printf("Subject 3    : %.2f\n", sub3);
    printf("Subject 4    : %.2f\n", sub4);
    printf("Subject 5    : %.2f\n", sub5);
    printf("Total Marks  : %.2f / 500\n", total);
    printf("Percentage   : %.2f%%\n", percentage);

    if (percentage >= 90)
        printf("Grade : A+\n");
    else if (percentage >= 80)
        printf("Grade : A\n");
    else if (percentage >= 70)
        printf("Grade : B\n");
    else if (percentage >= 60)
        printf("Grade : C\n");
    else if (percentage >= 50)
        printf("Grade : D\n");
    else
        printf("Grade : F (Fail)\n");

    return 0;
}