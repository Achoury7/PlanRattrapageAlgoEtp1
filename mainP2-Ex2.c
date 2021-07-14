#include <stdio.h>
//PARTIE 2 -- EXERCICE 2
int main(void)

{
int note1, note2, note3, note4, notenegatif;

printf("donner une premiere note\n");
    scanf("%d", &note1);

printf("donner une deuxieme note\n");
    scanf("%d", &note2);

printf("donner une troisieme note\n");
    scanf("%d", &note3);

printf("donner une quatrieme note\n");
    scanf("%d", &note4);

printf("Les quatres notes sont en place, donnez maintenant une note negatif\n");
    scanf("%d", &notenegatif);


printf("Voici votre note : %d\n" , (note1 + note2 + note3 + note4)/4);

return 0;
}
