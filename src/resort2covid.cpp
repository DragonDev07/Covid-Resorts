#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "resort2covid.hpp"




resort2covid::resort2covid(const std::string &resort) {
    resortIn = resort;
}

void resort2covid::county(const std::string &resort){
    std::ifstream resortlist("../data/resorts2.csv");
    std::string line;
    std::string word;
    std::vector<std::string> row;

    while (getline(resortlist, line)) {
        std::stringstream l(line); 
        if (line.find(resort) != std::string::npos) {
            while (getline(l, word, ',')) {
                row.push_back(word);
            }
            break;
        }
    }
    countyOut = row[4];
}

std::string resort2covid::covid(const std::string &county) {
    std::ifstream covidlist("../data/us-counties.csv");
    std::string line;
    std::string word;
    std::vector<std::string> row;

    while(getline(covidlist, line)) {
        std::stringstream l(line);
        if (line.find(county) != std::string::npos) {
            while (getline(l, word, ',')) {
                row.push_back(word);
            }
            break;
        }
    }

    return row[5];
}
