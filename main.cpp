#include <iostream>
#include "ParserConfig.cpp"

int main(int argc, char* argv[])
{
    ParserConfig *pars = new ParserConfig();
    pars->getOptions();
    std::cout << "\n";
    try {
        pars->initParser(argc, argv);
    }
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "\n";
    std::cout << pars->getBaseTime();
    std::cout << "\n";
    std::cout << pars->getNumbersOfCookers();
    std::cout << "\n";
    std::cout << pars->getNumbersOfKitchens();
    std::cout << "\n";
    pars->getOptions();
    return 0;
}