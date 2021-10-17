#include <iostream>
#include <fstream>
#include <sstream>
#include "match.hpp"

int main() {
    bool quit = false;
    char askQuit;
    std::string resort;
    std::string result;
    std::cout << std::endl;
    while (!quit){
        std::cout << "Enter resort name: ";
        std::cin >> resort;
        
        if (match(resort, result)) {
            std::cout << "Match, " << result << std::endl;
        } 
        else {
            std::cout << "No match" << std::endl;
        }
        std::cout << "Enter Q to quit. Press any other key to search again" << std::endl;
        std::cin >> askQuit;
        if (toupper(askQuit)){
            quit = true;
        }
    }
}
//TODO: WASM website