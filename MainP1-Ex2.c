#include <stdio.h>
//PARTIE 1 -- EXERCICE 2

int main(void)
{
/* Ancienne ecriture : int z = (a>b ? a : b) +  (a <= b ? a : b) ;

//Nouvelle ecriture : */

int nouveau_z = 0, a, b;
printf("Valeur de a?");
scanf("%d", &a);

printf("Valeur de b?");
scanf("%d", &b);

//Simplification de l'instruction



//INCLUSION DU SI DANS L'OPERATION TERNAIRE

if (a>b){

    a/b;
    a = nouveau_z;
}

else if (a<=b) {

    a*b;
    b = nouveau_z;
}
printf("La valeur du nouveau Z est : %d\n" , nouveau_z);



    return 0;
}

