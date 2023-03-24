//7. Write a program to guessing a number by the user against computer generated one using do while loop.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess, number, num_guesses = 0;
    srand(time(NULL));
    number = rand() % 100 + 1;  // Generate a random number between 1 and 100
    
    printf("I am thinking of a number between 1 and 100. Can you guess what it is?\n");
    
    do {
        printf("Enter your guess (1-100): ");
        scanf("%d", &guess);
        num_guesses++;
        
        if (guess > number) {
            printf("Too high. Try again.\n");
        } else if (guess < number) {
            printf("Too low. Try again.\n");
        }
    } while (guess != number);
    
    printf("Congratulations! You guessed the number in %d tries.\n", num_guesses);
    
    return 0;
}

