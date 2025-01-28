#include "voter.h"

int R = 3;
int vote1 = 0, vote2 = 0, vote3 = 0, vote4 = 0, vote5 = 0;

node *start = NULL;

int main() {
    while (1) {
        system("cls");
        printf("\n\n\n");
        printf("\t****** WELCOME TO THE ONLINE VOTING PORTAL ******\n\n");
        printf("\t***************************************************\n\n\n");
        printf("\t**** Please Enter 1 for Logging Vote Main Logs ****\n\n\n");

        int choice;
        scanf("%d", &choice);

        if (choice == 1) {
            start = main_logs(start);
        }
    }
    return 0;
}
