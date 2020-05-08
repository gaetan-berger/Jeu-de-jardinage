#ifdef PLANTE_CPP
#define PLANTE_CPP

#include "Plante.h"
#include <iostream>
#include "Botaniste.h"


        void Plante::maturité(int développement){
             _croissance-=développement;
            if(_croissance<0) _croissance=0;
            _taille+=10;
            _hydratation-=20;

        }
        void Plante::engrais(){
            fertilisant+=30;
            if(fertilisant>1) fertilisant=1;
              _fertilisant == 0;
            /* delay 24h
               fertilisant == 0 ; */

        }
        void Plante::taille(int coupé){
            _taille+=temps*10;
            printf("_taille", );
            if(_taille<50){
            fertilisant-=10;
            else(_taille<=50);
            fertilisant+=10;
            }
        }

        void Plante::afficher(){
            std::cout << _nom << "/100, votre plante a une maturité de : "
                << _croissance << "/100, votre plante as une taille de : "
                << _taille << "/100, votre plante a un fertilisantde : " << std::endl;
    }

        Plante::Plante(std::string nom): Botaniste(nom) {}

#endif
