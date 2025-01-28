#include "voter.h"

node* voter_insert(node *start) {
    int UNIVERSAL = 0, *z = &UNIVERSAL;
    char name[50], birth_date[15], aadhar[20];
    node *temp;

    system("cls");
    printf("\tEnter your AADHAR ID number: ");
    fflush(stdin);
    gets(aadhar);
    printf("\tEnter Your NAME: ");
    gets(name);
    printf("\tEnter Your BIRTH DATE (dd-mm-yyyy): ");
    gets(birth_date);

    temp = (node *)malloc(sizeof(node));
    strcpy(temp->aadhar, aadhar);
    strcpy(temp->name, name);
    strcpy(temp->birth_date, birth_date);
    temp->next = NULL;

    if ((strcmp(aadhar, "10001") == 0 && strcmp(name, "Rajat Kumar") == 0 && strcmp(birth_date, "31-03-1999") == 0)) {
        start = search(aadhar, name, birth_date, start, z);
        if (UNIVERSAL == 0) {
            voting();
        } else {
            not_again();
        }
    } else {
        R--;
        if (R == 0) {
            stop();
        } else {
            printf("\tYour AADHAR ID, NAME, or DATE OF BIRTH is incorrect. Please re-enter.\n");
            system("pause");
            start = main_logs(start);
        }
    }
    return start;
}

// Additional functions (search, main_logs) go here
