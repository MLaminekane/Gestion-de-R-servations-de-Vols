#ifndef VOL_H
#define VOL_H

#include <vector>
#include "passager.h"

class Vol {
private:
    int numero_vol;
    int capacite;
    std::vector<Passager> passagers;

public:
    Vol(int numero_vol, int capacite);

    void afficher_billets() const;
    void ajouter_passager(const Passager& nouveau_passager);
    void annuler_billet(int identifiant_passager);
    int nombre_passagers() const;
    void transfert_passagers(Vol& destination_vol);

    static int compteur_vols;
    static int compter_vols_crees();

private:
    bool capacite_depassee() const;
};

#endif 