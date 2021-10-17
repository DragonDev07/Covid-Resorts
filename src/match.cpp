#include "match.hpp"
#include <iostream>
#include <fstream>
#include <sstream>

void match(std::string inputName){
    std::ifstream file ("../data/resorts.txt");
    std::string line;

    bool match = false;
    if (file){
        while (getline(file, line)){
            if (line == inputName){
                std::cout << "\nMatch found!" << std::endl;
                match = true;
                break;
            }
        }
        if (match == false){
            std::cout << "failed to find resort" << std::endl;
        }
    }
}

