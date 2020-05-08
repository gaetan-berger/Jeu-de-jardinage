#include <iostream>
#include "Plante.cpp"
#include "Botaniste.cpp"

int main(){
    //creation d'une plante
    Plante * Chétiflor = new Plante("Chétiflor");
    Chétiflor->afficher(); /*ou (*chétiflor).afficher() */

    Botaniste * myself = new Botaniste ("gaetan");

  /*  myself->nourrir(link);
    (*link).afficher(); */

    return 0;
}
