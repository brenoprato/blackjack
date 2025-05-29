#include <stdio.h>
#include "dealer.h"
#include "player.h"

int main(){
    card baralho[NUM_CARDS];

    new_baralho(baralho);

    for (int i = 0; i < NUM_CARDS; i++){
        printf("%s%s ", baralho[i].value, baralho[i].suit);
    }

    printf("\n");

    shuffle(baralho);

    for (int i = 0; i < NUM_CARDS; i++){
        printf("%s%s ", baralho[i].value, baralho[i].suit);
    }

    return 0;

}