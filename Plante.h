#ifdef PLANTE_H
#define PLANTE_H

#include <string>
#include "Botaniste.h"

class Chaton : public Animal {
/*    private:
        std::string _name;
        int _faim;
        int _ennui;
        int _fatigue;
           herite de la classe animal
           mais on peux ajouter des truc en privé car le chaton ronrone donc on peux
           int _ronronement */
    public:
        void maturité(int développement);
        void engrais();
        void taille(int coupé);
        void hydrater(int eau);
        void temps(int delai);

        void afficher();

        plante(std::string nom);

};

#endif
