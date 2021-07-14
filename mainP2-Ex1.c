#include <stdio.h>
//PARTIE 2 -- EXERCICE 1
int main(void)

{
 int i, n, som;


 som = 0;

 /*for (i = 0; i<4; i++)                //Instruction manuel FOR
    (printf ("donnez un entier");
        scanf("%d", &n);
        som += n;
    )
    printf(Somme : %d\n, som);
*/
                                        //Instruction manuel WHILE

while (i<4) {
    printf("donner un entier");
    scanf("%d", &n);
    som +=n;
    i++;
}


                                        //Instruction manuel DO WHILE

    do{
    printf("donner un entier");
    scanf("%d", &n);
    som +=n;
    i++;

} while (i<4);

 return 0;
}
