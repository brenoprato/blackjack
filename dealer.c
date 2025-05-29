#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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

void shuffle (card *baralho){

    srand(time(NULL));

    for (int i = NUM_CARDS - 1; i > 0; i--){
        int j = rand()%(i+1);

        card temp = baralho[i];
        baralho[i] = baralho[j];
        baralho[j] = temp;
    }


}