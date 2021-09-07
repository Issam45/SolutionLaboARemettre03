// But : �crire un programme pour calculer le montant qu�un individu devra d�bourser pour faire un voyage dans une 
// automobile lou�e.L�algorithme tient compte du kilom�trage parcouru et de la dur�e du voyage qui sont soumises
// par le requ�rant.
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

   cout << "Ce programme demande � l'utilisateur de rentrer le nombre de jours de la location \net le nombre de kilom�tre parcouru, puis calcul le montant � d�bourser. \n \n";

   cout << "!!Pour quitter en tout moment rentrer (9999) pour le nombre de jours!!" << endl;

   cout << "\t \t -------------------------------Exercie Entre Deux------------------------------- \n";

   // Demander � l'utilisateur de rentrer le nombre de jours de locations
   cout << "Rentrer le nombre de jours de locations: ";

   cin >> nbJours; // Stocker le nombre dans une variable

   cout << endl;

   // Demander � l'utilisateur de rentrer le nombre de KM parcouru durant la location
   cout << "Rentrer le kilom�trage parcouru: ";

   cin >> nbKm; // Stocker le nombre dans une variable

   cout << endl;

   while (nbJours != 9999) // Tant que nb1 n'est pas �gale � (9999) continuer � rentrer dans la boucle
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

1.    nb1            r�ponse � l'�cran

2.    12               12 est un multiple de 2 et de 3

3.    3                3 est un multiples de 3

4.    2               2 est un multiples de 2

5.    -1              -1 n'est ni un multiple de 2, ni de 3

6.    -3               3 est un multiples de 3

7.   -12              12 est un multiple de 2 et de 3

8.    -4               -4 est un multiples de 2

9.   -21              -21 est un multiples de 3

10. V�rifier qu'il n'y a pas de boucle infini

11. Rentrer 9999 comme premi�re valeur et rentrer n'importe quel autre valeur pour les deux autres nombres afin de quitter!

12. Rentrer une lettre et le prog ne fonctionne plus.
*/