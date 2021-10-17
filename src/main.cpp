#include <iostream>
#include <fstream>
#include <sstream>
#include "match.hpp"

int main() {
    std::string resort;
    std::cout << "Enter resort name: ";
    std::cin >> resort;
    std::endl;
    match(resort);
}
//TODO: Better match system
//TODO: WASM website