#include <stdio.h>

struct Employee {
    int empId;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float grossSalary;
};

int main() {
    struct Employee emp[100];
    int n = 0, choice, i, id, found;

    while (1) {
        printf("\n===== Salary Management System =====\n");
        printf("1. Add Employee Salary Details\n");
        printf("2. Display Salary Details\n");
        printf("3. Search Employee Salary\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\nEnter Employee ID: ");
                scanf("%d", &emp[n].empId);

                printf("Enter Employee Name: ");
                scanf("%s", emp[n].name);

                printf("Enter Basic Salary: ");
                scanf("%f", &emp[n].basicSalary);

                emp[n].hra = emp[n].basicSalary * 0.20;
                emp[n].da = emp[n].basicSalary * 0.10;
                emp[n].grossSalary = emp[n].basicSalary + emp[n].hra + emp[n].da;

                n++;
                printf("Salary details added successfully!\n");
                break;

            case 2:
                if (n == 0) {
                    printf("No records found.\n");
                } else {
                    printf("\nEmployee Salary Records:\n");
                    printf("------------------------------------------------------\n");

                    for (i = 0; i < n; i++) {
                        printf("Employee ID  : %d\n", emp[i].empId);
                        printf("Name         : %s\n", emp[i].name);
                        printf("Basic Salary : %.2f\n", emp[i].basicSalary);
                        printf("HRA          : %.2f\n", emp[i].hra);
                        printf("DA           : %.2f\n", emp[i].da);
                        printf("Gross Salary : %.2f\n", emp[i].grossSalary);
                        printf("------------------------------------------------------\n");
                    }
                }
                break;

            case 3:
                printf("Enter Employee ID to search: ");
                scanf("%d", &id);

                found = 0;
                for (i = 0; i < n; i++) {
                    if (emp[i].empId == id) {
                        printf("\nEmployee Found!\n");
                        printf("Employee ID  : %d\n", emp[i].empId);
                        printf("Name         : %s\n", emp[i].name);
                        printf("Basic Salary : %.2f\n", emp[i].basicSalary);
                        printf("HRA          : %.2f\n", emp[i].hra);
                        printf("DA           : %.2f\n", emp[i].da);
                        printf("Gross Salary : %.2f\n", emp[i].grossSalary);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Employee not found!\n");
                break;

            case 4:
                printf("Exiting Program...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}