#include <stdio.h>
//PARTIE 1 -- EXERCICE 5
int main5(void)

{
int n = 543;
int p = 5;
float x = 34.5678;

printf("A : %d %f\n", n, x);

printf("B : %4d %10f\n", n, x);

printf("C : %2d %3f\n", n, x);

printf("D : %10.3f %10.3e\n", x, x);

printf("E : %*d\n", p,n);

printf("F : %*.*f\n", 12, 5, x);
}

/* Les resultats de ce programme sont :

A : 543 34.567799

B : 543  34.567799

C: 543 34.567799

D: 34.568 3.457e+001

E: 543

F: 34.56780     */
