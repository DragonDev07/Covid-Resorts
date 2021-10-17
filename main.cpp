#include <iostream>
#include <fstream>
#include <sstream>

int main(){
    std::ifstream file ("resorts.txt");
    std::string line;
    std::string inputName;

    std::cout << "Resort: ";
    std::cin >> inputName;
    bool match = false;
    if (file){
        while (getline(file, line)){
            if (line == inputName){
                std::cout << "\nMatch!\n";
                match = true;
                break;
            }
        }
        if (match == false){
            std::cout << "ERROR 404 NOT FOUND\n";
        }
    }
}
//TODO: Better match system
//TODO: WASM website