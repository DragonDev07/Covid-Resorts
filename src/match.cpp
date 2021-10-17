#include "match.hpp"
#include <iostream>
#include <fstream>
#include <sstream>

bool match(std::string inputName){
    std::ifstream file ("../data/resorts.txt");
    std::string line;

    bool match = false;
    while (getline(file, line)){
        if (line.find(inputName)){
            match = true;
            return true;
            break;
        }
    }
    if (match == false){
        return false;
    }
}