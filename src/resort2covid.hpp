#include <iostream>
#ifndef RESORT2COVID_HPP
#define RESORT2COVID_HPP

class resort2covid
{
    public: 
    resort2covid(const std::string &resort);
    void county(const std::string &resort);
    std::string covid(const std::string &county);

    std::string resortIn;
    std::string countyOut;
};



#endif