#include "voter.h"

void admin() {
    int password;
    printf("\tEnter Admin Password: ");
    scanf("%d", &password);

    if (password == 3692) {
        show();
    } else {
        printf("\tIncorrect Password!\n");
    }
}

void show() {
    system("cls");
    printf("\tPresent Vote Count:\n");
    printf("\tMamata Banerjee: %d Votes\n", vote1);
    printf("\tDeepa Dasmunsi: %d Votes\n", vote2);
    printf("\tProtima Rajak: %d Votes\n", vote3);
    printf("\tJoydeb Halder: %d Votes\n", vote4);
    printf("\tKartik Chandra Ghosh: %d Votes\n", vote5);
}
