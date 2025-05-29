#include <stdio.h>
#include "dealer.h"
#include "player.h"
#include "utils.h"

int main(){
    clear_terminal();
    int play = 1;

    printf("_________________________\n");
    printf("|                       |\n");
    printf("|       BLACKJACK       |\n");
    printf("|_______________________|\n\n");

    printf("  Pressione:\n");
    printf("    [1] Jogar\n");
    printf("    [0] Sair\n\n");
    printf("  Sua escolha: ");
    scanf("%d", &play);

    if (play != 1){
        clear_terminal();
        return 0;
    }
    clear_terminal();

    do{

        card baralho[NUM_CARDS];
        card hand_player[11];
        card hand_dealer[11];

        int cards_count = 0;
        int n_player = 0, n_dealer = 0, n_baralho = 0;
        int value_player = 0, value_dealer = 0;
        new_baralho(baralho);
        shuffle(baralho);

        add_card(hand_dealer, &n_dealer, baralho, &n_baralho);
        add_card(hand_player, &n_player, baralho, &n_baralho);
        add_card(hand_dealer, &n_dealer, baralho, &n_baralho);
        add_card(hand_player, &n_player, baralho, &n_baralho); // deu duas carta pra cada

        value_dealer = hand_value(hand_dealer, &n_dealer, 1);
        value_player = hand_value(hand_player, &n_player, 0);



        do{
            char hit_stand;
            clear_terminal();
            printf("_________________________\n");
            printf("|                       |\n");
            printf("|       BLACKJACK       |\n");
            printf("|_______________________|\n\n");

            printf("\nDealer:\n");
            printf("  HAND: ");
            print_hand(hand_dealer, &n_dealer, 1);
            printf("\n  Soma: %d\n", value_dealer);

            printf("\n--------------------------------\n");

            printf("Player:\n");
            printf("  HAND: ");
            print_hand(hand_player, &n_player, 0);
            printf("\n  Soma: %d\n", value_player);
            printf("\n");


            printf("HIT/STAND: ");
            scanf("%c", &hit_stand);

            if (hit_stand == 'h' || hit_stand == 'H'){
                add_card(hand_player, &n_player, baralho, &n_baralho);
                value_player = hand_value(hand_player, &n_player, 0);
            }
            if (hit_stand == 'S' || hit_stand == 's'){
                play = 0;
            }
             if (value_player > 21){
                printf("Voce stourou a mao, perdeu\n");
                play = 0;
            }
        }while(play == 1);

        if (value_player <= 21){
            
            do{
                value_dealer = hand_value(hand_dealer, &n_dealer, 0);

                clear_terminal();
                printf("_________________________\n");
                printf("|                       |\n");
                printf("|       BLACKJACK       |\n");
                printf("|_______________________|\n\n");

                printf("\nDealer:\n");
                printf("  HAND: ");
                print_hand(hand_dealer, &n_dealer, 0);
                printf("\n  Soma: %d\n", value_dealer);

                printf("\n--------------------------------\n");

                printf("Player:\n");
                printf("  HAND: ");
                print_hand(hand_player, &n_player, 0);
                printf("\n  Soma: %d\n", value_player);
                printf("\n");

                add_card(hand_dealer, &n_dealer, baralho, &n_baralho);

            }while(value_dealer <= 17);

            if (value_dealer > 21){
                printf ("Dealer estourou a mao, voce ganhou!\n");
            }else if(value_dealer > value_player){
                printf ("Dealer ganhou\n");
            }else{
                printf ("Voce ganhou!\n");
            }
        }

        printf("Jogar de novo 1/0: ");
        scanf("%d", &play);

    }while(play == 1);

    clear_terminal();
    return 0;

}