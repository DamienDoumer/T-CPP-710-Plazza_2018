/*
** EPITECH PROJECT, 2018
** ParserConfig.cpp
** File description:
** Parser for configurations
*/

#include "include/ParserConfig.h"

ParserConfig::ParserConfig() {
    this->options.push_back("-t");
    this->options.push_back("--time");
    this->options.push_back("-k");
    this->options.push_back("--kitchen");
    this->options.push_back("-c");
    this->options.push_back("--cooker");
    this->baseTime = 1;
    this->numbersOfCookers = 1;
    this->numbersOfKitchens = 1;
}

bool ParserConfig::isOption(std::string option) {
    if (option == "-t" || option == "--time" || option == "-k" || option == "--kitchen" || option == "-c" || option == "--cooker") {
        return true;
    }
    return false;
}

std::vector<std::string> ParserConfig::getOptions() {
    for (int i=0; i < this->options.size(); i++) {
        std::cout << this->options.at(i);
    }
    return this->options;
}

int ParserConfig::indexOptions(std::string option) {
    int cpt = 0;

    while (cpt < this->options.size()){
        if (option == this->options.operator[](cpt)) {
            return cpt;
        }
        cpt++;
    }
    throw Error("this option doesn't exist");
}


void ParserConfig::removeOptions(std::string option) {
    this->options.erase(this->options.begin() + indexOptions(option));
}

std::vector<std::string> ParserConfig::params(int argc, char* argv[]){
    int i = 0;
    int debut = 2;
    std::vector<std::string> res;

    while (debut < argc) {
        res.push_back(argv[debut]);
        i++;
        debut++;
    }
    return res;
}

int ParserConfig::getBaseTime() {
    return this->baseTime;
}

int ParserConfig::getNumbersOfKitchens() {
    return this->numbersOfKitchens;
}

int ParserConfig::getNumbersOfCookers() {
    return this->numbersOfCookers;
}

bool ParserConfig::isNumber(std::string elem) {
    bool valid = true;

    for (int i = 0; i < elem.size(); i++) {
        if ((elem[i] < '0') || (elem[i] > '9')) {
            valid = false;
            break;
        }
    }
    return valid;

}

void ParserConfig::initParser(int argc, char* argv[]) {
    std::vector<std::string> list = this->params(argc, argv);
    int i = 0;
    while (i < list.size()) {
        if (this->isOption(list[i]) == true) {
            if (this->isNumber(list[i+1]) == true) {
                if (list[i] == "-k" || list[i] == "--kitchen") {
                    this->removeOptions("-k");
                    this->removeOptions("--kitchen");
                    this->numbersOfKitchens = std::stoi(list[i+1]);
                }
                if (list[i] == "-t" || list[i] == "--time") {
                    this->removeOptions("-t");
                    this->removeOptions("--time");
                    this->baseTime = std::stoi(list[i+1]);
                }
                if (list[i] == "-c" || list[i] == "--cooker") {
                    this->removeOptions("-c");
                    this->removeOptions("--cooker");
                    this->numbersOfCookers = std::stoi(list[i+1]);
                }
            }
            else {
                throw Error("This element is not number");
            }
        }
        else {
            throw Error("This element is not option");
        }
        i = i + 2;
    }
}
