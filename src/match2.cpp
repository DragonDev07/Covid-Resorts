#include "match.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

std::string match2(const std::string &findable){
    ifstream resorts2("../data/resorts2.csv");
    string line2;

    bool match2 = false;
    while (getline(resorts2, line2)){
        if (line2.find(findable) != string::npos){
            return line2;
            match2 = true;
        } else {
            match2 = false;
        }
    }
}
