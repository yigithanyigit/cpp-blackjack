cmake_minimum_required(VERSION 3.17)
project(cpp_blackjack)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(cpp_blackjack
        deck.cpp
        deck.h
        main.cpp
        game.cpp
        game.h
        )
