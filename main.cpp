#include "deck.h"
#include "game.h"

int x;

int main() {
    std::cout << "Welcome to game" << std::endl << "Dealer Stands 16 and must draw 17" << std::endl;
    std::cout << "For draw a card please Type '1' if want to stay type '2'" << std::endl;
    std::cout << "*************************************************************************\n";
    start_game();
    std::cin >> x;
    game(x);

}
