#include <stdio.h>
#include "dealer.h"

const char *values[NUM_VALUES] = {"A","2","3","4","5","6","7","8","9","T","J","Q","K"};

const char *suits[NUM_SUITS] = {"♣", "♥", "♠", "♦"};

void new_baralho(card *baralho){

    int posicao = 0;
    for (int i = 0; i < NUM_VALUES; i++){ //passa por cada carta
        for (int j = 0; j < NUM_SUITS; j++){ //passa por cada naipe
            baralho[posicao].value = (char *)values[i];
            baralho[posicao].suit = (char *)suits[j];
            posicao++; //proxima carta
        }
    }
}