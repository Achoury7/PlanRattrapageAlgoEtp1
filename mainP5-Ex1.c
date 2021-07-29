#include <stdio.h>

//PARTIE 5 - EXERCICE 1

//PROTOTYPES


int main(void)
{


char maligne[132];
char e[] = "e";
int compteurdee = 0;
printf("Ecris une ligne\n");
scanf("%s", maligne);

int testlettree = strcmp(maligne, e);

if(testlettree == 0)
    compteurdee += 1;
    printf("Il y'a %d\n" , compteurdee);

    if(testlettree < 0)
        compteurdee = 0;
    printf("Il n'y a pas de e dans cette ligne");

    if(testlettree > 0)
        compteurdee = 0;
    printf("Il ,n'y a pas de e dans cette ligne");





return 0;
}

