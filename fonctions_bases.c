#include <stdio.h>
#include <stdbool.h>
#include "fonctions.h"

/*-------------------------------------------------------------------------*/

void Init_tab(int plateau[Lenght_tab][Lenght_tab]) { 
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j ++){
            plateau[i][j] = (-1);
        }
    }
    plateau[3][3] = 1;
    plateau[3][4] = 0;
    plateau[4][3] = 0;
    plateau[4][4] = 1;
}

/*-------------------------------------------------------------------------*/

void Print_tab(int plateau[Lenght_tab][Lenght_tab]){ 
    printf("  0 1 2 3 4 5 6 7");
    printf("\n");
    for(int i = 0; i < 8; i++){
        printf("%d ",i);
        for(int j = 0; j < 8; j ++){
            if (plateau[i][j] == 0) printf("N ");
            else if (plateau[i][j] == 1) printf("B ");
            else printf("+ ");
        }
        printf("\n");
    }
}

/*-------------------------------------------------------------------------*/

bool Is_empty(int plateau[Lenght_tab][Lenght_tab], int ligne, int column){ 
    return (plateau[ligne][column] == (-1));
}

/*-------------------------------------------------------------------------*/

bool Is_possible(int plateau[Lenght_tab][Lenght_tab], int i, int j, int Indice_player, int Possible_vect[8][2]){

    bool possible = false;

    int Vect[8][2] = {{0,-1},{-1,-1},{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1}};

    if (Is_empty(plateau,i,j)){
        for (int i_vect = 0; i_vect < 8; i_vect++){

            int pos_ligne = Vect[i_vect][0]+i;
            int pos_column = Vect[i_vect][1]+j;

            bool end = true;
            bool in_boucle=false;

            if(pos_ligne >= 0 && pos_ligne <= 7 && pos_column >= 0 && pos_column <= 7){
                end = false;
            }
            while (plateau[pos_ligne][pos_column] != Indice_player && plateau[pos_ligne][pos_column] != (-1) && end == false){
                in_boucle=true;
                if(!(pos_ligne >= 0 && pos_ligne <= 7 && pos_column >= 0 && pos_column <= 7)){
                    end = true;
                } else {
                    pos_ligne += Vect[i_vect][0];
                    pos_column += Vect[i_vect][1];
                }
            }
            if ((plateau[pos_ligne][pos_column] == Indice_player) && (in_boucle==true)){
                Possible_vect[i][0] = Vect[i][0];
                Possible_vect[i][1] = Vect[i][1];
                possible = true;
            }
        }
    }
    if (possible) printf("Coup valide\n");
    else printf("Coup invalide\n");

    return possible;
}
