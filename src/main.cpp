#include <iostream>
#include <fstream>
#include <sstream>
#include "match.hpp"

int main() {
    std::string resort;
    std::cout << "Enter resort name: ";
    std::cin >> resort;
    std::cout << std::endl;
    bool quit;
    char askQuit;
    while (!quit){
        if (match(resort)) {
            std::cout << "Match" << std::endl;
            std::cout << line;
        } else if (!match(resort)){
            std::cout << "No match" << std::endl;
        }
        if (toupper(askQuit)){
            quit = true;
        }
    }
}
//TODO: WASM website