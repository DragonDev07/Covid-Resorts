#include "match.hpp"
#include <iostream>
#include <fstream>
#include <sstream>

bool match(std::string inputName){
    std::ifstream file ("../data/resorts.txt");
    std::string line;

    bool match = false;
    if (file){
        while (getline(file, line)){
            if (line == inputName){
                match = true;
                return match;
                break;
            }
        }
        if (match == false){
            return match;
        }
    }
}

