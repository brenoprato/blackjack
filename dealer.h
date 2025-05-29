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
void add_card(card *hand, int *n_cards, card*baralho, int*n_baralho);
int hand_value(card *hand, int *n_cards, int hide_card);
void print_hand(card *hand, int *n_cards, int hide_card);

#endif