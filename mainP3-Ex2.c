#include <stdio.h>
//PARTIE 3 -- EXERCICE 2

int n=5;
main()
{
void fct (int p);  //on appelle la fonction dont l'argument est integer de p ,
int n=3;            //on ecrase la valeur de  n qui est desormais egale a 3
fct(n);            //on appelle la fonction n
}

void fct(int p)  // PROTOTYPE de la fonction dont largument est integer de p
{
    printf("%d %d", n, p);   // on affiche la valeur de n et p
}

/* Le programme affiche "5 [espace] 3" */

