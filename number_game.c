 //simple C program (Hello world)
 /*
 Name: Jackson Mutinda 
 Reg No:CT101/G/26534/25
 Date:12/10/2025
 Description: c program based on loops 
 */
 #include<stdio.h> // preprocessor directive scan (). printf()//main function 
 //main functions 
#include <stdio.h>

int main() {
    // --- Number Guessing Game ---
    int secretNumber, guess, attempts = 0;
    secretNumber = 1 + rand() % 20;  // random number between 1 and 20

    printf("\nGuess the number (1 to 20):\n");
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNumber)
            printf("Too high!\n");
        else if (guess < secretNumber)
            printf("Too low!\n");
        else
            printf("Congratulations! You guessed it!\n");

    } while (guess != secretNumber);

    printf("Total attempts: %d\n", attempts);

    return 0;
}