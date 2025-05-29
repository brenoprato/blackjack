#include <stdio.h>
#include "dealer.h"
#include "player.h"

int main(){
    card baralho[NUM_CARDS];

    new_baralho(baralho);
    shuffle(baralho);

    card hand_player[11];
    card hand_dealer[11];
    int cards_count = 0;
    int n_player = 0, n_dealer = 0, n_baralho = 0;
    int value_player = 0, value_dealer = 0;

    add_card(hand_dealer, &n_dealer, baralho, &n_baralho);
    add_card(hand_player, &n_player, baralho, &n_baralho);

    value_dealer = hand_value(hand_dealer, &n_dealer);
    value_player = hand_value(hand_player, &n_player);

    printf ("player: %d | dealer: %d", value_player, value_dealer);
   


}