//Write a program to Create menu-driven array operations system.
// Write a program to Create menu-driven array operations system.

#include <stdio.h>

void inputArray(int arr[], int n);
void displayArray(int arr[], int n);
void searchElement(int arr[], int n);
void findLargest(int arr[], int n);
void findSmallest(int arr[], int n);
void calculateSum(int arr[], int n);
void reverseArray(int arr[], int n);

int main()
{
    int arr[100], n, choice;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    inputArray(arr, n);

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Display Array\n");
        printf("2. Search Element\n");
        printf("3. Find Largest Element\n");
        printf("4. Find Smallest Element\n");
        printf("5. Calculate Sum\n");
        printf("6. Reverse Array\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                displayArray(arr, n);
                break;

            case 2:
                searchElement(arr, n);
                break;

            case 3:
                findLargest(arr, n);
                break;

            case 4:
                findSmallest(arr, n);
                break;

            case 5:
                calculateSum(arr, n);
                break;

            case 6:
                reverseArray(arr, n);
                break;

            case 7:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 7);

    return 0;
}

void inputArray(int arr[], int n)
{
    int i;
    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
}

void displayArray(int arr[], int n)
{
    int i;
    printf("Array Elements: ");

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

void searchElement(int arr[], int n)
{
    int i, key, found = 0;

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("Element found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Element not found.\n");
}

void findLargest(int arr[], int n)
{
    int i, max = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    printf("Largest Element = %d\n", max);
}

void findSmallest(int arr[], int n)
{
    int i, min = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] < min)
            min = arr[i];
    }

    printf("Smallest Element = %d\n", min);
}

void calculateSum(int arr[], int n)
{
    int i, sum = 0;

    for(i = 0; i < n; i++)
        sum += arr[i];

    printf("Sum = %d\n", sum);
}

void reverseArray(int arr[], int n)
{
    int i;

    printf("Reversed Array: ");

    for(i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);

    printf("\n");
}