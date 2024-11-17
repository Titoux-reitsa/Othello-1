#include <stdbool.h>
#define Lenght_tab 8


// Fonctions de fonctions_bases.c

void Init_tab(int plateau[Lenght_tab][Lenght_tab]);
void Print_tab(int plateau[Lenght_tab][Lenght_tab]); 
bool Is_empty(int plateau[Lenght_tab][Lenght_tab], int ligne, int column); 
bool Is_possible(int plateau[Lenght_tab][Lenght_tab], int i, int j, int Indice_player);

// Fonctions de IA.c
