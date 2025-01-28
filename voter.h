#ifndef VOTER_H
#define VOTER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

// Voter information structure
typedef struct voter_information {
    char aadhar[20];
    char name[50];
    char birth_date[15];
    struct voter_information *next;
} node;

// Function declarations
node* voter_insert(node *start);
node* main_logs(node *start);
node* search(char x[], char y[], char z[], node *start, int *Y);
void voting();
void admin();
void winner();
void not_again();
void stop();
void exi();
void show();

// Global variables
extern int vote1, vote2, vote3, vote4, vote5;
extern int R;

#endif
