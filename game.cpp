#include "game.h"


int q;
int playerhand, dealerhand, temp;


void init_() {
    init();
    shuffle();
}

int draw() {
    if (is_empty() == false)
        return return_card();
    printf("New Deck initializing\nInitiliazed!\n");
    init_();
    return return_card();
};

void start_game() {
    playerhand = 0;
    dealerhand = 0;
    temp = 0;
    dealerhand += draw();
    playerhand += draw();
    temp += draw();
    playerhand += draw();
    printf("Your hand is %d\nDealer hand is %d**\n", playerhand, dealerhand);
    dealerhand += temp;
    return;
}

void game(int q, int x) {

    if (q == 21 && x != 1) {
        printf("Congrats Blackjack\n");
        printf("*************************************************************************\n");
        start_game();
        return;
    } else if (q > 21 && x != 1) {
        printf("Busted\n");
        printf("*************************************************************************\n");
        start_game();
        return;
    }
}

void game(int x) {
    print_deck();
    printf("\n");
    if (dealerhand > 21) {
        printf("Your hand %d\n", playerhand);
        printf("Dealer hand %d\n", dealerhand);
        printf("You win\n");
        printf("*************************************************************************\n");
        start_game();
        std::cin >> q;
        game(q);
        return;
    } else if (dealerhand == 16) {
        printf("Dealer hand %d\n", dealerhand);
        if (playerhand > 16) {
            printf("You Win\n");
            printf("*************************************************************************\n");
        } else if (playerhand == dealerhand) {
            printf("Draw");
            printf("*************************************************************************\n");
        } else {
            printf("*************************************************************************\n");
            start_game();
            std::cin >> q;
            game(q);
        }

    } else if (dealerhand > playerhand && x != 1) {
        printf("Dealer hand %d\n", dealerhand);
        printf("Dealer Win\n");
        printf("*************************************************************************\n");
        start_game();
        std::cin >> q;
        game(q);

    }
    game(playerhand, 0);
    switch (x) {
        case 1:
            playerhand += draw();
            printf("your hand %d\n", playerhand);
            game(playerhand, 0);
            break;
        case 2:
            dealerhand += draw();
            printf("dealer hand %d\n", dealerhand);
            game(2);
            break;
    }
    std::cin >> q;
    game(q);
}
