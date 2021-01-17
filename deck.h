#pragma once
#include <iostream>
#include <vector>
#include <time.h>
#include<stdlib.h>

class Deck{
public:
    void shuffle();
    void init();
    void print_deck();

    Deck () {
        init();
        shuffle();
        print_deck();
    };
};