#include <stdio.h>
//PARTIE 2 -- EXERCICE 5
int main(void)

{
int unite1 = 1 , unite2 = 1, unite3 = 1, unite4 = 1,  n = 1 , unitemoinsun = -1, unitemoinsdeux = -2, unite5;

for (n>2; n++;) {
    unite3 = (unite1 + unitemoinsun);
    unite4 = (unite2 + unitemoinsdeux);
    unite5 = unite3 + unite4;
    printf("%d\n", unite5);
}

    return 0;
}

