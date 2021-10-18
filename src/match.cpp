#include "match.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

bool match(const std::string &inputName, std::string &lineout){
    std::ifstream file ("../data/resorts.txt");
    std::string line;

    bool match = false;
    while (getline(file, line)){
        if (line.find(inputName) != std::string::npos){
            match = true;
            lineout = line;
            return true;
            break;
        }
    }
    if (match == false){
        return false;
    }
}