#include <iostream>
#include <fstream>
#include <sstream>
#include "match.hpp"

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
            for (int i = 459; i > 0; i--){
                std::ifstream resortUpdated("../data/resorts2.csv");
                std::string skiResortName;
                std::string town;
                std::string stateShort;
                std::string county;
                std::string line2;
                char comma;
                bool o = false;
                while (getline(resortUpdated, line2)){
                    getline(resortUpdated, skiResortName, ',');
                    getline(resortUpdated, town, ',');
                    getline(resortUpdated, stateShort, ',');
                    getline(resortUpdated, county, ',');
                    std::cout << skiResortName << std::endl;
                }

                if (skiResortName == result2){
                    i = 0;
                    std::cout << skiResortName << std::endl;
                    o = true;
                }
            }
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
