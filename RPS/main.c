#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int user_choice, computer_choice;

    printf("Let's play Rock, Paper, Scissors!\n");
    printf("Enter 0 for Rock, 1 for Paper, or 2 for Scissors: ");
    scanf("%d", &user_choice);

    computer_choice = rand() % 3;

    printf("You chose: ");
    switch (user_choice) {
        case 0:
            printf("Rock\n");
            break;
        case 1:
            printf("Paper\n");
            break;
        case 2:
            printf("Scissors\n");
            break;
        default:
            printf("Invalid choice\n");
            return 1;
    }

    printf("The computer chose: ");
    switch (computer_choice) {
        case 0:
            printf("Rock\n");
            break;
        case 1:
            printf("Paper\n");
            break;
        case 2:
            printf("Scissors\n");
            break;
    }

    if (user_choice == computer_choice) {
        printf("It's a tie!\n");
    } else if ((user_choice == 0 && computer_choice == 2) ||
               (user_choice == 1 && computer_choice == 0) ||
               (user_choice == 2 && computer_choice == 1)) {
        printf("You win!\n");
    } else {
        printf("The computer wins.\n");
    }

    return 0;
}
