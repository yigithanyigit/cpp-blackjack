#include "deck.h"

int Ace = 1;
int J = 10;
int Q = 10;
int K = 10;

std::vector<int> deck;


void Deck::init(){
    deck = {Ace,2,3,4,5,6,7,8,9,10,J,K,Q,
            Ace,2,3,4,5,6,7,8,9,10,J,K,Q,
            Ace,2,3,4,5,6,7,8,9,10,J,K,Q,
            Ace,2,3,4,5,6,7,8,9,10,J,K,Q

    };

}

void Deck::shuffle() {

    for (int i = 0; i < 52; i++){
        std::swap(deck[i], deck[std::rand() % 52]);
    }
};

void Deck::print_deck() {
    std::cout << "Deck::" << std::endl;
    int t = 0;
    for (auto i : deck){
        std::cout << i << " ";
        t++;
        if(t % 13 == 0)
            std::cout << std::endl;
    }
}

