#include <iostream>
using namespace std;

int main () {
  int nbrePlaces = 10;
  int choix;
  std::cout << "************ Evaluation 2 ************\n";
  std::cout << " \n";
  std::cout << "    1 - Entrée dans le parking\n";
  std::cout << "    2 - Nombres de places disponibles\n";
  std::cout << "    3 - Sortie du parking\n";
  std::cout << "    4 - Quitter\n";
  std::cout << " \n";
  std::cout << "**************************************\n";
  std::cin >> choix ;
  std::cout << ": choix : \n" << choix ;
  switch (choix) 
    {
      case 1 :
        std::cout << " - Entrée dans le parking \n";
        break ;

      case 2 :
        std::cout << " - Nombres de places disponibles \n"; 
        break ;

      case 3 : 
        std::cout << " - Sortie du parking\n";
        break ;

      case 4 :
        std::cout << " - Quitter\n"; 
        break ;


  default:
       std::cout << " CHOIX INCORECTE\n" ; 
    }
  
  
  
  
  return 0;
}