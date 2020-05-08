#ifdef BOTANISTE_H
#define BOTANISTE_H

#include <string>
#include "Plante.h"

class Botaniste{
    private:
        std::string _nomBotaniste;

    public:
        void maturité(Plante *cible);
        void engrais(Plante * cible);
        void laisserDormir(Plante * cible);
        plante(std::string nom);

};

#endif
