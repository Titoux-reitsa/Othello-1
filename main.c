#include <stdio.h>
#include <stdlib.h>

#include "fonctions.h"

int main(){

    // Initialisation du tableau
    char plateau[Lenght_tab][Lenght_tab];

    // Initialisation du tableau et affichage
    Init_tab(plateau);
    Print_tab(plateau);
    return 0;
}