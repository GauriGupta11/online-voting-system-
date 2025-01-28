#include "voter.h"

void voting() {
    int choice;
    system("cls");
    printf("\t* List of Candidates *\n");
    printf("\t1. Mamata Banerjee\n");
    printf("\t2. Deepa Dasmunsi\n");
    printf("\t3. Protima Rajak\n");
    printf("\t4. Joydeb Halder\n");
    printf("\t5. Kartik Chandra Ghosh\n");
    printf("\tEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: vote1++; break;
        case 2: vote2++; break;
        case 3: vote3++; break;
        case 4: vote4++; break;
        case 5: vote5++; break;
        default: printf("\tInvalid Choice!\n"); break;
    }
}

void winner() {
    system("cls");
    if (vote1 > vote2 && vote1 > vote3 && vote1 > vote4 && vote1 > vote5) {
        printf("\tWinner: Mamata Banerjee with %d votes\n", vote1);
    } else if (vote2 > vote1 && vote2 > vote3 && vote2 > vote4 && vote2 > vote5) {
        printf("\tWinner: Deepa Dasmunsi with %d votes\n", vote2);
    } else if (vote3 > vote1 && vote3 > vote2 && vote3 > vote4 && vote3 > vote5) {
        printf("\tWinner: Protima Rajak with %d votes\n", vote3);
    } else if (vote4 > vote1 && vote4 > vote2 && vote4 > vote3 && vote4 > vote5) {
        printf("\tWinner: Joydeb Halder with %d votes\n", vote4);
    } else if (vote5 > vote1 && vote5 > vote2 && vote5 > vote3 && vote5 > vote4) {
        printf("\tWinner: Kartik Chandra Ghosh with %d votes\n", vote5);
    }
}
