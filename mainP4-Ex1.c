#include <stdio.h>

//PARTIE 4 - EXERCICE 1


//FORMALISME TABLEAU
//PROTOTYPES
#define tailletableau 10
void montableaudedix(){


int tableau[tailletableau]={14, 15, 47, 2, 95, 41, 16, 22, 18, 23};
if (tableau[0] < tableau[1]){

        printf("Le minimum est: %d\n" , tableau[0]);
};

if (tableau[4] > tableau[5]){

         printf("Le maximum est: %d\n" , tableau[4]);
};
}

//FORMALISME POINTEUR
void montableaudedixavecpointeur(){


int tableau[tailletableau]={14, 15, 47, 2, 95, 41, 16, 22, 18, 23};
if (*tableau + 0 < *tableau + 1){

        printf("Le minimum est: %d\n" , (*tableau + 0));
};

if (*tableau + 4 > *tableau + 5){

         printf("Le maximum est: %d\n" , (*tableau + 4));
};
}


int main(void)
{

montableaudedix;
montableaudedixavecpointeur;

return 0;
}

