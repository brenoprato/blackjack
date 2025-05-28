#ifndef DEALER_H
#define DEALER_H

typedef struct{
    char *value;
    char *suit;
}card;

void new_baralho(card *baralho);
void shuffle();
void give_card();
int hand_value();

#endif