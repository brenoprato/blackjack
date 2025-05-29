#ifndef DEALER_H
#define DEALER_H

#define NUM_VALUES 13
#define NUM_SUITS 4
#define NUM_CARDS (NUM_SUITS * NUM_VALUES)

typedef struct{
    char *value;
    char *suit;
}card;

void new_baralho(card *baralho);
void shuffle(card *baralho);
void give_card(card *baralho);
int hand_value(card *baralho);

#endif