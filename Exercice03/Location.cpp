// But : Écrire un programme pour calculer le montant qu’un individu devra débourser pour faire un voyage dans une 
// automobile louée.L’algorithme tient compte du kilométrage parcouru et de la durée du voyage qui sont soumises
// par le requérant.
// Auteur :	Issam Abdelkrim
// Date : 2021-09-07

#include <iostream>
using namespace std;

int main()
{
   int nbKm; // Initaliser une variable pour stocker le nmb de km parcouru
   int nbJours; // Initialiser une variable pour stocker le nmb de jours de locations
   int coutParJours = 45; // Variable initialisée à 45, qui défini le cout par jours de la location
   int kmOffert = 250; // Variable initialisée à 250 qui signifie le nmb de km offert par jours de location
   float coutLocations; // Initialiser une variable qui vas permettre de stocker la valeur de la location
   int kmSurplus; // Initialiser une variable qui va permettre de stocker la valeur du km en surplus à l'aide d'un calcul
   float coutKmSurplus; // Initialiser une variable qui va permettre de stocker le cout en cas de km en surplus
   float coutEssence; // Initialiser une variable qui va permettre de stocker le cout de l'essence en rapport avec le km parcouru
   float coutTotal; // Initialiser une variable qui va permettre de stocker le cout total


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

      
      if (nbKm <= nbJours * kmOffert && nbJours >= 0 && nbKm >= 0)
      {
         coutLocations = nbJours * coutParJours; // Calcule du cout de la location, nmb de jours louée multiplier par le cout par jours.

         coutEssence = (7.6 * nbKm / 100) * 1.35; // Calculer le cout de l'essence --> 7.6 litres multiplier par le nmb de km parcouru diviser par 100km puisqu'on moyenne sa gaspille 7,6litrre/100km

         coutTotal = coutEssence + coutLocations; // Cout total est l'addition de toutes les valeurs trouvées plus haut

         cout << "Le coût total de votre location sera de " << coutTotal << "$" << endl;

         system("pause"); //  Mettre pause sur l'écran
         system("cls"); // Effacer ce qui se trouve à l'écran

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
         
      }

      else if (nbKm >= nbJours * kmOffert && nbJours >= 0 && nbKm >= 0)
      {
         kmSurplus = nbKm - (nbJours * kmOffert); // Calcule du km en surplus --> on soustrait le nbKm effectué par le total de km gratuit (nbJours * kmOffert)

         coutKmSurplus = kmSurplus * 0.05; // Calcule du cout des km en surplus en multipliant par 0.05 le km en surplus

         coutLocations = nbJours * coutParJours; // Calcule du cout de la location, nmb de jours louée multiplier par le cout par jours.

         coutEssence = (7.6 * nbKm / 100) * 1.35; // Calculer le cout de l'essence --> 7.6 litres multiplier par le nmb de km parcouru diviser par 100km puisqu'on moyenne sa gaspille 7,6litrre/100km 

         coutTotal = coutKmSurplus + coutEssence + coutLocations; // Cout total est l'addition de toutes les valeurs trouvées plus haut

         cout << "Le coût total de votre location sera de " << coutTotal << "$" << endl; // Afficher à l'écran le cout total à l'aide de la variable coutTotal qui est le résultat du calcul ci-dessus

         system("pause");
         system("cls");

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
      }

      else
      {
         cout << "Erreur!!! Vous avez rentré une ou plusieurs valeurs négatives!" << endl; // Message d'erreur en cas d'une ou plusieurs valeurs négatives

         system("pause");
         system("cls");

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
      }
 
   }

   
      


   system("pause");
   return 0;

}

/*    Plans de tests

1.    nbJours     nbKm            réponse à l'écran

2.    -1           250            Erreur!!! Vous avez rentré une ou plusieurs valeurs négatives!

3.    3           -250            Erreur!!! Vous avez rentré une ou plusieurs valeurs négatives!

4.    3           750             Le coût total de votre location sera de coutTotal

5.    3           800             Le coût total de votre location sera de coutTotal

6. Vérifier qu'il n'y a pas de boucle infini

7. Rentrer 9999 comme première valeur et rentrer n'importe quel autre valeur pour les deux autres nombres afin de quitter!

8. Rentrer une lettre et le prog ne fonctionne plus.
*/