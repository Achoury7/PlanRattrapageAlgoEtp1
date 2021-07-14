#include <stdio.h>
//PARTIE 2 -- EXERCICE 3

int main(void)

{
    int i, j=0, s, ligne;

    printf("Entrez le nombre de lignes: ");
    scanf("%d",&ligne); //On addresse la valeur ligne a une adresse stocké par la memoire du programme mais non visible

    for(i=1; i<=ligne; ++i, j=0) //Se lit: pour une incrementation de 1, i inferieur ou egale a ligne, on incremente i et j = 0

    {
        for(s=1; s<=ligne-i; ++s) //pour saut de ligne = 1 , saut de ligne doit etre egale a ligne -1, on incremente saut de ligne
        {
            printf("  "); //on affiche rien (vide)
        }

        while(j != 2*i-1) //tant que j est different de 2 multiplié par incrementation - 1
        {
            printf("*"); //alors, on affiche une etoile
            ++j;
        }
        printf("\n"); //saut a la ligne
    }

    return 0;
}

