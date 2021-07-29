#include <stdio.h>

//PARTIE 5 - EXERCICE 3

//PROTOTYPES


int main(void)
{


char maligne[132];
char e[] = "\n";
printf("Ecris une ligne\n");
scanf("%s", maligne);

int supprimere = strcpy(maligne, e);


strstr(e, maligne) ;

printf("Ma ligne sans les e %s\n" , maligne);





return 0;
}

