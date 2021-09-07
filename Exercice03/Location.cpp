// But : Écrire un programme pour calculer le montant qu’un individu devra débourser pour faire un voyage dans une 
// automobile louée.L’algorithme tient compte du kilométrage parcouru et de la durée du voyage qui sont soumises
// par le requérant.
// Auteur :	Issam Abdelkrim
// Date : 2021-09-07

#include <iostream>
using namespace std;

int main()
{
   int nbKm;
   int nbJours;
   int coutParJours = 45;
   int kmOffert = 250;
   int coutTotalJours;


   setlocale(LC_ALL, "");

   cout << "Ce programme demande à l'utilisateur de rentrer le nombre de jours de la location \net le nombre de kilomètre parcouru, puis calcul le montant à débourser. \n \n";

   cout << "!!Pour quitter en tout moment rentrer (9999) pour le nombre de jours!!" << endl;

   cout << "\t \t -------------------------------Exercie Entre Deux------------------------------- \n";

   // Demander à l'utilisateur de rentrer le nombre de jours de locations
   cout << "Rentrer le nombre de jours de locations: ";

   cin >> nbJours; // Stocker le nombre dans une variable

   cout << endl;

   // Demander à l'utilisateur de rentrer le nombre de KM parcouru durant la location
   cout << "Rentrer le kilomètrage parcouru: ";

   cin >> nbKm; // Stocker le nombre dans une variable

   cout << endl;

   while (nbJours != 9999) // Tant que nb1 n'est pas égale à (9999) continuer à rentrer dans la boucle
   {
      if (nbJours <= 1)
      {
         coutTotalJours = nbJours * coutParJours;

         kmOffert = nbJours * kmOffert;

         cout << kmOffert;

         system("pause");
      }

   }

   system("pause");
   return 0;

}

/*    Plans de tests

1.    nb1            réponse à l'écran

2.    12               12 est un multiple de 2 et de 3

3.    3                3 est un multiples de 3

4.    2               2 est un multiples de 2

5.    -1              -1 n'est ni un multiple de 2, ni de 3

6.    -3               3 est un multiples de 3

7.   -12              12 est un multiple de 2 et de 3

8.    -4               -4 est un multiples de 2

9.   -21              -21 est un multiples de 3

10. Vérifier qu'il n'y a pas de boucle infini

11. Rentrer 9999 comme première valeur et rentrer n'importe quel autre valeur pour les deux autres nombres afin de quitter!

12. Rentrer une lettre et le prog ne fonctionne plus.
*/