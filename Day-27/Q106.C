#include <stdio.h>

struct Employee {
    int empId;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[100];
    int n = 0, choice, i, id, found;

    while (1) {
        printf("\n===== Employee Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\nEnter Employee ID: ");
                scanf("%d", &emp[n].empId);

                printf("Enter Employee Name: ");
                scanf("%s", emp[n].name);

                printf("Enter Salary: ");
                scanf("%f", &emp[n].salary);

                n++;
                printf("Employee added successfully!\n");
                break;

            case 2:
                if (n == 0) {
                    printf("No employee records found.\n");
                } else {
                    printf("\nEmployee Records:\n");
                    printf("---------------------------------\n");
                    for (i = 0; i < n; i++) {
                        printf("Employee ID : %d\n", emp[i].empId);
                        printf("Name        : %s\n", emp[i].name);
                        printf("Salary      : %.2f\n", emp[i].salary);
                        printf("---------------------------------\n");
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
                        printf("Employee ID : %d\n", emp[i].empId);
                        printf("Name        : %s\n", emp[i].name);
                        printf("Salary      : %.2f\n", emp[i].salary);
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