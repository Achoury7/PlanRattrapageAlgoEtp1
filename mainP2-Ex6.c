#include <stdio.h>
//PARTIE 2 -- EXERCICE 6
int main(void)
{

int i = 1, j , resultat;



while (i < 13) {


        printf("%d", i); //on affiche le compteur i puis on mets J egal a 1
        j = 1;


while (j < 13){


        resultat = (i*j);  //on multiplie le "compteur" i au "compteur" j
        printf("\t%d",resultat);  // le /t est l'inverse de /n , au lieu de sauter a la ligne, il va sauter "a coté"
        j++; //on incremente le compteur j.

}


printf("\n");
i++;
}
}

