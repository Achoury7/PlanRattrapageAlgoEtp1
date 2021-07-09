#include <stdio.h>
//PARTIE 1 -- EXERCICE 1
int main(void)

{
int n = 10 , p = 4;
long q = 2;
float x = 1.75;


    printf("La reponse A est : %ld\n", n + q);  // A

    printf("La reponse B est : %.2f\n", n + x);  //B

    printf("La reponse C est : %ld\n", n % p +q);  //C [% est le MODULO]

    printf("La reponse D est : %d\n", n < p);  //D  [0 indique FAUX, 1 indique VRAI]

    printf("La reponse E est : %d\n", n >= p);  //E [0 indique FAUX, 1 indique VRAI]

    printf("La reponse F est : %d\n", n > q );  //F

    printf("La reponse G est : %ld\n", q + 3 * (n > p) );  //G   [si on multiplie n et p par 3, alors cela donne N = 30 et P = 12, en ajoutant q, on obtiens N = 32 et P = 14, ce qui valide toujours que N est plus grand que P]

    printf("La reponse H est : %d\n", q && n);  //H [Q ET N n'ont pas le meme resultat, donc comme alors le resultat de la boolenne donne 0, cela est faux]

    printf("La reponse I est : %d\n", (q-2) && (n-10) );  //I [cela est vrai (mais je ne sais pas pourquoi cela indique 0 toujours...)

    printf("La reponse J est : %.2f\n", x * (q==2) );  //J

    printf("La reponse K est : %.2f\n", x * (q=5) );  //K

    return 0;
}
