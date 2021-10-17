#include <iostream>
#include <fstream>
#include <sstream>
#include "match.hpp"

int main() {
    std::string resort;
    std::cout << "Enter resort name: ";
    std::cin >> resort;
    std::cout << std::endl;
    match(resort);
    if (match){
        std::cout << "Match" << std::endl;
    } else if (!match){
        std::cout << "No match" << std::endl;
    }
}
//TODO: Better match system
//TODO: WASM website