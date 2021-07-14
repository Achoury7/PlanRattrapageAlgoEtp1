#include <stdio.h>
//PARTIE 2 -- EXERCICE 4

int main(void)

{
int monchiffre, premier = 1;


printf("Donnez la valeur de votre chiffre\n" , monchiffre);
scanf("%d", &monchiffre);

monchiffre % 0 == 0;
monchiffre % monchiffre == monchiffre;

if (monchiffre == premier) {

    printf("Votre chiffre est bien un chiffre premier");
}
else if (monchiffre != premier) {
    printf("Votre chiffre n'est pas un chiffre premier");
}
    return 0;
}

