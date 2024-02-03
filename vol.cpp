#include "vol.h"
#include <iostream>

int Vol::compteur_vols = 0;

Vol::Vol(int numero_vol, int capacite) : numero_vol(numero_vol), capacite(capacite) {
    compteur_vols++;
}

void Vol::afficher_billets() const {
    std::cout << "Billets reserves pour le vol " << numero_vol << " : " << std::endl;
    for (const auto& passager : passagers) {
        passager.afficher_informations();
    }
    std::cout << std::endl;
}

void Vol::ajouter_passager(const Passager& nouveau_passager) {
    if (!capacite_depassee()) {
        passagers.push_back(nouveau_passager);
        std::cout << "Passager ajoute avec succes au vol " << numero_vol << std::endl;
    }
    else {
        std::cout << "Capacité maximale atteinte. Impossible d'ajouter un nouveau passager au vol " << numero_vol << std::endl;
    }
}

void Vol::annuler_billet(int identifiant_passager) {
    auto it = std::remove_if(passagers.begin(), passagers.end(), [identifiant_passager](const Passager& passager) {
        return passager.obtenir_id() == identifiant_passager;
        });

    if (it != passagers.end()) {
        passagers.erase(it, passagers.end());
        std::cout << "Billet annule avec succès pour le passager avec l'identifiant " << identifiant_passager << " sur le vol " << numero_vol << std::endl;
    }
    else {
        std::cout << "Passager avec l'identifiant " << identifiant_passager << " non trouve sur le vol " << numero_vol << std::endl;
    }
}

int Vol::nombre_passagers() const {
    return passagers.size();
}

void Vol::transfert_passagers(Vol& destination_vol) {
    destination_vol.passagers.insert(destination_vol.passagers.end(), passagers.begin(), passagers.end());
    passagers.clear();
    std::cout << "Transfert de passagers de vol " << numero_vol << " à vol " << destination_vol.numero_vol << " effectue avec succes." << std::endl;
}

bool Vol::capacite_depassee() const {
    return passagers.size() >= capacite;
}

int Vol::compter_vols_crees() {
    return compteur_vols;
}
