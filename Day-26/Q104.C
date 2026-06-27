#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("===== Simple Quiz Application =====\n\n");

    // Question 1
    printf("Q1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2) {
        score++;
    }

    // Question 2
    printf("\nQ2. Which language is used for system programming?\n");
    printf("1. Python\n2. Java\n3. C\n4. HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3) {
        score++;
    }

    // Question 3
    printf("\nQ3. How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3) {
        score++;
    }

    // Result
    printf("\n===== Quiz Result =====\n");
    printf("Your Score = %d/3\n", score);

    if (score == 3)
        printf("Excellent! You got all answers correct.\n");
    else if (score == 2)
        printf("Good Job!\n");
    else if (score == 1)
        printf("Average Performance.\n");
    else
        printf("Better Luck Next Time!\n");

    return 0;
}