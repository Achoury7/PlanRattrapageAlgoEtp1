#include <stdio.h>
//PARTIE 3 -- EXERCICE 1

//-------------Prototypes-----------------//


void f1()                                      //Sans retour , Sans argument
{
    printf("Bonjour!\n");
}




void f2(int bonjour) //Sans retour , avec argument

{
    printf("Combien de fois bonjour?\n");
    scanf("%d");
    printf("Bonjour\n" , bonjour);

}




int f3(int bonjour) //Avec retour , avec argument
{
    printf("Combien de fois bonjour?\n");
    scanf("%d");
    printf("Bonjour\n" , bonjour);
}


//-----PROGRAMME PRINCIPALE----//


int main(void)
{
f1();
f2();
f3();
return 0;
}

