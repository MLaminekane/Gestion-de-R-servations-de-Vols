
#include "vol.h"
#include "passager.h"
#include <iostream>

int main() {
    // Déclaration de deux objets Vol 
    Vol vol1(101, 10);
    Vol vol2(102, 5);

    // Remplir vol1 avec 10 passagers
    for (int i = 1; i <= 10; ++i) {
        Passager passager("Passager" + std::to_string(i), i, "Siege" + std::to_string(i), 100.0 + i * 10.0);
        vol1.ajouter_passager(passager);
    }

    // Afficher les informations du vol et des passagers
    vol1.afficher_billets();

    std::cout << "Nombre total de vols crees : " << Vol::compter_vols_crees() << std::endl;

    // Transférer les passagers de vol1 à vol2
    vol1.transfert_passagers(vol2);

    // Afficher les informations après le transfert
    std::cout << "Informations de vol1 apres le transfert :" << std::endl;
    vol1.afficher_billets();

    std::cout << "Informations de vol2 apres le transfert :" << std::endl;
    vol2.afficher_billets();

    // Annuler un billet dans vol2
    vol2.annuler_billet(2);
    std::cout << "Billet annulé pour le passager 2 dans le vol2." << std::endl;

    // Afficher les informations de vol2 après l'annulation
    std::cout << "Informations de vol2 après l'annulation :" << std::endl;
    vol2.afficher_billets();

    return 0;
}
