#include <stdio.h>
//PARTIE 1 -- EXERCICE 2

int main2(void)
{
/* Ancienne ecriture : int z = (a>b ? a : b) +  (a <= b ? a : b) ;

//Nouvelle ecriture : */

int nouveau_z, a, b;
nouveau_z = (a>b) + a; //Simplification de l'instruction

printf("La valeur du nouveau z est : %d\n" , nouveau_z );


    return 0;
}

