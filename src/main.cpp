#include <iostream>
using namespace std;

int main() {

  int nbrePlaces = 10;
  int choix;
  do {
    std::cout << "************ Evaluation 2 ************\n";
    std::cout << " \n";
    std::cout << "    1 - Entrée dans le parking\n";
    std::cout << "    2 - Nombres de places disponibles\n";
    std::cout << "    3 - Sortie du parking\n";
    std::cout << "    4 - Quitter\n";
    std::cout << " \n";
    std::cout << "**************************************\n";
    std::cin >> choix;
    std::cout << " Choix :\n" << choix;
    switch (choix) {
    case 1:
      nbrePlaces--;
      std::cout << " - Entrée dans le parking \n";
      std::cout << " BIENVENUE\n";
      std::cout << "Nombre de place restante:\n" << nbrePlaces;
      std::cout << " \n";
      break;

    case 2:
      std::cout << " - Nombres de places disponibles \n";
      std::cout << "places disponibles:\n" << nbrePlaces;
      std::cout << " \n";
      break;

    case 3:
      nbrePlaces++;
      std::cout << " - Sortie du parking\n";
      std::cout << "à bientot !";
      std::cout << " Nombre de place disponibles:\n" << nbrePlaces;
      std::cout << " \n";
      break;

    case 4:
      std::cout << " - Quitter\n";
      std::cout << " Au revoir... \n";
      std::cout << " \n";
      break;

    default:
      std::cout << " CHOIX INCORECTE\n";
      std::cout << " \n";
    }
  } while (choix != 4);

  return 0;
}
