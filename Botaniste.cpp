#ifdef BOTANISTE_CPP
#define BOTANISTE_CPP

#include <string>
#include "Chaton.h"
#include "Player.h"

    void Botaniste::domrir(){
        for(Plante &plante :this->_listePlante ){
          plante->croissance();
        }
    }
    void Botaniste::couperPlante(Plante * cible){
        cible->setNbTaillee(cible->getNbTaillee()+1);
    }
    void Botaniste::donnerEngrais(Plante * cible){
      if(this->_engrais>=1){
        cible->setAEngrais(true);
        _engrais--;
      }
      else{
        printf("vous n'avez plus d'engrais\n");
      }

    }

    Player(std::string nom): _nomPlayer(_nomPlayer), _argent(100), _engrais(0) {}

#endif
