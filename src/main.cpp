#include <iostream>
#include <fstream>
#include <sstream>
#include "match.hpp"
#include "resort2covid.hpp"

int main() {
    bool quit = false;
    char askQuit;
    std::string resort;
    std::string result;
    std::string result2;
    std::cout << std::endl;
    while (!quit){
        std::cout << "Enter resort name: ";
        std::cin >> resort;

        if (match(resort, result, result2)) {
            std::cout << "Match, " << result << std::endl;
            resort2covid s_resort(result);
            s_resort.county(s_resort.resortIn);
            std::cout << "covid cases in the area: " << s_resort.covid(s_resort.countyOut) << std::endl;
        }
        else {
            std::cout << "No match" << std::endl;
        }
        std::cout << "Enter Q to quit. Press any other key to search again" << std::endl;
        std::cin >> askQuit;
        if (toupper(askQuit) == 'Q'){
            quit = true;
        }
    }
}
