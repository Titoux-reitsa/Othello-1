#include <stdio.h>
#include <stdbool.h>
#include "fonctions.h"

void Init_tab(char plateau[Lenght_tab][Lenght_tab]){ // 
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j ++){
            plateau[i][j] = '_';
        }
    }
    plateau[3][3] = 'B';
    plateau[3][4] = 'N';
    plateau[4][3] = 'N';
    plateau[4][4] = 'B';
}

void Print_tab(char plateau[Lenght_tab][Lenght_tab]){ // 
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j ++){
            printf("%c ", plateau[i][j]);
        }
        printf("\n");
    }
}

bool Is_empty(char plateau[Lenght_tab][Lenght_tab], int ligne, int column){ // 
    return (plateau[ligne][column] == '_');
}

int Nb_return_if_possible(char plateau[Lenght_tab][Lenght_tab], char color){

    // Iteration sur le tableau pour trouver les lignes vides
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j ++){
            if (Is_empty(plateau,i,j)){

                // Iteration sur les voisins pour voir si il y a un ennemi
                for(int ligne_vect = -1; ligne_vect < 2; ligne_vect++){
                    for(int column_vect = -1; column_vect < 2; column_vect++){
                        if(ligne_vect+i >= 0 && ligne_vect+i <= 7){
                            if(column_vect+j >= 0 && column_vect+j <= 7){
                                if(plateau[ligne_vect+i][column_vect+j] != color && plateau[ligne_vect+i][column_vect+j] != '_')
                            }
                        }
                    }
                }
            }

        }
    }
}