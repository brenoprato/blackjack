#include <stdio.h>
#include "dealer.h"

int main(){
    card baralho[NUM_CARDS];

    new_baralho(baralho);

    for (int i = 0; i < NUM_CARDS; i++){
        printf("%s%s\n", baralho[i].value, baralho[i].suit);
    }

    return 0;

}