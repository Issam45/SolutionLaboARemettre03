// But : �crire un programme pour calculer le montant qu�un individu devra d�bourser pour faire un voyage dans une 
// automobile lou�e.L�algorithme tient compte du kilom�trage parcouru et de la dur�e du voyage qui sont soumises
// par le requ�rant.
// Auteur :	Issam Abdelkrim
// Date : 2021-09-07

#include <iostream>
using namespace std;

int main()
{
   int nbKm; // Initaliser une variable pour stocker le nmb de km parcouru
   int nbJours; // Initialiser une variable pour stocker le nmb de jours de locations
   int coutParJours = 45; // Variable initialis�e � 45, qui d�fini le cout par jours de la location
   int kmOffert = 250; // Variable initialis�e � 250 qui signifie le nmb de km offert par jours de location
   float coutLocations; // Initialiser une variable qui vas permettre de stocker la valeur de la location
   int kmSurplus; // Initialiser une variable qui va permettre de stocker la valeur du km en surplus � l'aide d'un calcul
   float coutKmSurplus; // Initialiser une variable qui va permettre de stocker le cout en cas de km en surplus
   float coutEssence; // Initialiser une variable qui va permettre de stocker le cout de l'essence en rapport avec le km parcouru
   float coutTotal; // Initialiser une variable qui va permettre de stocker le cout total


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

      
      if (nbKm <= nbJours * kmOffert && nbJours >= 0 && nbKm >= 0)
      {
         coutLocations = nbJours * coutParJours; // Calcule du cout de la location, nmb de jours lou�e multiplier par le cout par jours.

         coutEssence = (7.6 * nbKm / 100) * 1.35; // Calculer le cout de l'essence --> 7.6 litres multiplier par le nmb de km parcouru diviser par 100km puisqu'on moyenne sa gaspille 7,6litrre/100km

         coutTotal = coutEssence + coutLocations; // Cout total est l'addition de toutes les valeurs trouv�es plus haut

         cout << "Le co�t total de votre location sera de " << coutTotal << "$" << endl;

         system("pause"); //  Mettre pause sur l'�cran
         system("cls"); // Effacer ce qui se trouve � l'�cran

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
         
      }

      else if (nbKm >= nbJours * kmOffert && nbJours >= 0 && nbKm >= 0)
      {
         kmSurplus = nbKm - (nbJours * kmOffert); // Calcule du km en surplus --> on soustrait le nbKm effectu� par le total de km gratuit (nbJours * kmOffert)

         coutKmSurplus = kmSurplus * 0.05; // Calcule du cout des km en surplus en multipliant par 0.05 le km en surplus

         coutLocations = nbJours * coutParJours; // Calcule du cout de la location, nmb de jours lou�e multiplier par le cout par jours.

         coutEssence = (7.6 * nbKm / 100) * 1.35; // Calculer le cout de l'essence --> 7.6 litres multiplier par le nmb de km parcouru diviser par 100km puisqu'on moyenne sa gaspille 7,6litrre/100km 

         coutTotal = coutKmSurplus + coutEssence + coutLocations; // Cout total est l'addition de toutes les valeurs trouv�es plus haut

         cout << "Le co�t total de votre location sera de " << coutTotal << "$" << endl; // Afficher � l'�cran le cout total � l'aide de la variable coutTotal qui est le r�sultat du calcul ci-dessus

         system("pause");
         system("cls");

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
      }

      else
      {
         cout << "Erreur!!! Vous avez rentr� une ou plusieurs valeurs n�gatives!" << endl; // Message d'erreur en cas d'une ou plusieurs valeurs n�gatives

         system("pause");
         system("cls");

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
      }
 
   }

   
      


   system("pause");
   return 0;

}

/*    Plans de tests

1.    nbJours     nbKm            r�ponse � l'�cran

2.    -1           250            Erreur!!! Vous avez rentr� une ou plusieurs valeurs n�gatives!

3.    3           -250            Erreur!!! Vous avez rentr� une ou plusieurs valeurs n�gatives!

4.    3           750             Le co�t total de votre location sera de coutTotal

5.    3           800             Le co�t total de votre location sera de coutTotal

6. V�rifier qu'il n'y a pas de boucle infini

7. Rentrer 9999 comme premi�re valeur et rentrer n'importe quel autre valeur pour les deux autres nombres afin de quitter!

8. Rentrer une lettre et le prog ne fonctionne plus.
*/