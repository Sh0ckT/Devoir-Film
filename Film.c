#include <cs50.h>
#include <stdio.h>

int main(void)
{
   string filmCategorieEnfant[3] = {"Le Lorax", "Le Bon Gros Géant", "Soul"};// ici pour chaque catégorie d'age, on propose trois differents films
   string filmCategorieAdos[3] = {"Spiderman", "Transformers", "Twiligth"};
   string filmCategorieAdulte[3] = {"Candyman", "Pulp Fiction", "The deep House"};

   int ask = get_int("Quel âge avez vous ? ");
   for(int i =0; i < 3; i++)
   {
       if(ask < 11)

       {
           printf("Est-ce que tu veux voir %s ? [o/n]", filmCategorieEnfant[i]); // demande si la personne veut voir l'un des trois films proposés dans la catégorie, %s reference les strings vu precedemment
           char yesNo = get_char("");
           if(yesNo == 'o')
           {
              printf("Bon film!");
              break;
           }
       }
       else if(ask >= 11 && ask <= 17)

       {
           printf("Est-ce que tu veux voir %s ? [o/n]", filmCategorieAdos[i]);
           char yesNo = get_char("");
           if(yesNo == 'o')
           {
              printf("Bon film!");
              break;
           }
       }
       else

       {
           printf("Est-ce que tu veux voir %s ? [o/n]", filmCategorieAdulte[i]);
           char yesNo = get_char(" ");
           if(yesNo == 'o')
           {
              printf("Bon film!");
              break;
           }
           else
           {
               printf("Voulez-vous voir autre chose ? [o/n]\n");//Donne la possibilité de choisir dans une autre catégorie
               yesNo = get_char(" ");
               if(yesNo == 'o')
               {

               printf("Est-ce que tu veux voir %s ? [o/n]", filmCategorieAdos[i]);
                 yesNo = get_char(" ");
                if(yesNo == 'o')
                {
                printf("Bon film!");
                break;
                }
                else
                {
                  printf("Est-ce que tu veux voir %s ? [o/n]", filmCategorieEnfant[i]);
                  yesNo = get_char(" ");
                 if(yesNo == 'o')
                {
                printf("Bon film!");
                break;
                }
                }
               }
          }
      }
  }

}
