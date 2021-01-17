#include "deck.h"


int Ace = 1;
int J = 10;
int Q = 10;
int K = 10;

std::vector<int> deck;

void init() {
    deck = {Ace, 2, 3, 4, 5, 6, 7, 8, 9, 10, J, K, Q,
            Ace, 2, 3, 4, 5, 6, 7, 8, 9, 10, J, K, Q,
            Ace, 2, 3, 4, 5, 6, 7, 8, 9, 10, J, K, Q,
            Ace, 2, 3, 4, 5, 6, 7, 8, 9, 10, J, K, Q

    };
}

void shuffle() {
    srand((unsigned) time(0));
    for (int i = 0; i < 52; i++) {
        std::swap(deck[i], deck[std::rand() % 52]);
    }
}

void print_deck() {
    std::cout << "Deck::" << std::endl;
    int t = 0;
    for (auto i : deck) {
        std::cout << i << " ";
        t++;
        if (t % 13 == 0)
            std::cout << std::endl;
    }
    //std::cout << t++;
}

int deck_size() {
    return deck.size();
}

bool is_empty() {
    return deck.empty();
}

int return_card() {
    int card = deck.front();
    deck.erase(deck.begin());
    return card;
};
