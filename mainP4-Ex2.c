#include <stdio.h>

//PARTIE 4 - EXERCICE 2

//PROTOTYPES


void deftableau(){
int min = 0;
int max = 0;
int tableau[0];
printf("Minimum du tableau?");
scanf("%d\n" , min);
printf("Maximum du tableau?");
scanf("%d\n" , max);



while(min > 10)
    printf("Veuillez reeseyer un nombre en dessous de dix");


while(max > 10)
    printf("Veuillez reeseyer un nombre en dessous de dix");


if(*tableau[min] + 1 < *tableau[max] + 1){
    printf("L'indice du tableau minimum est : %d\n", *tableau[min]);
}

if(*tableau[max] + 1 > *tableau[min] + 1){
    printf("L'indice du tableau maximum est : %d\n", *tableau[man]);
}
};






int main(void)
{


return 0;
}

