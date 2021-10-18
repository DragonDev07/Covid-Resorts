#include "match.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

bool match(const std::string &inputName, std::string &lineout, std::string &resultOut){
    std::ifstream resorts("../data/resorts.txt");
    std::string line;

    bool match = false;
    while (getline(resorts, line)){
        if (line.find(inputName) != std::string::npos){
            match = true;
            lineout = line;
            resultOut = inputName;
            return true;
            break;
        }
    }
    if (match == false){
        return false;
    }
}