#pragma once
#ifndef SERVICESVOL_H
#define SERVICESVOL_H

#include "vol.h"

class ServicesVol {
public:
    static void saisir_informations_vol(Vol& vol);
    static void saisir_informations_passager_et_ajouter(Vol& vol);
    static void saisir_id_passager_et_annuler(Vol& vol);
};

#endif 