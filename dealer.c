#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "dealer.h"

const char *values[NUM_VALUES] = {"A","2","3","4","5","6","7","8","9","T","J","Q","K"};

const char *suits[NUM_SUITS] = {"[C]", "[H]", "[S]", "[D]"}; //♣ ♥ ♠ ♦

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

void add_card(card *hand, int *n_cards, card *baralho, int *n_baralho) {
    if (*n_cards >= 11) {
        printf("Mão cheia!\n");
        return;
    }

    hand[*n_cards] = baralho[*n_baralho];
    (*n_cards)++;
    (*n_baralho)++; 
}

int hand_value(card *hand, int *n_cards) {
    int value = 0;
    int aces = 0;

    for (int i = 0; i < *n_cards; i++) {
        char *v = hand[i].value;

        if (strcmp(v, "A") == 0) {
            value += 11;
            aces++;
        } else if (strcmp(v, "K") == 0 || strcmp(v, "Q") == 0 || strcmp(v, "J") == 0 || strcmp(v, "T") == 0) {
            value += 10;
        } else {
            value += atoi(v);
        }
    }

    // Trata o Ás como 1 se estourar 21
    while (value > 21 && aces > 0) {
        value -= 10;
        aces--;
    }

    return value;
}

