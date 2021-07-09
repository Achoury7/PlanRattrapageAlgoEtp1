#include <stdio.h>
//PARTIE 1 -- EXERCICE 4

int main4(void)

{

int n = 10 , p = 5 , q = 10, r;


r = n == (p = q);
printf("A : n = d%  p = d%  q = %d  r = %d\n", n, p, q, r);
n = p = q = 5;
n += p += q;
printf("B : n = %d  p = %d  q = %d\n", n, p, q);
q = n < p ? n++ : p++ ;
printf("C : n = %d p = %d q = %d\n", n, p, q);
q = n > p ? n++ : p++;
printf("D : n = %d p = %d q = %d\n", n, p, q);
}

/* Les resultats fournit par le programme sont :

A : n = d000000A = dq = 10    r = 10
B : n = 15    p  = 10    q = 5
C : n = 15    P = 11     q 15
D : n = 16    P = 11     q 15
*/
