/*
** EPITECH PROJECT, 2018
** ParserConfig.h
** File description:
** Parser for configurations
*/

#ifndef PLAZZA_PARSERCONFIG_H
#define PLAZZA_PARSERCONFIG_H

#include <iostream>
#include <vector>
#include <fstream>
#include "../Error.cpp"

class ParserConfig {

public:
    ParserConfig();
    ~ParserConfig();

    //! Verify if option is options
    /*!
      \param option is the string corresponding to an option
      \return bool, true if option is an option else false
    */
    bool isOption(std::string option);

    //! return list of parameters
    /*!
      \param argc is int corresponding to a size of argv
      \param argv is array of char correpond to the different element of entry
      \return std::vector<std::string>, list of different parameters
    */
    std::vector<std::string> params(int argc, char* argv[]);

    //! return index of option
    /*!
      \param option represent option to verify
      \return int, represent index of option parameter
    */
    int indexOptions(std::string option);

    //! remove option specified by option parameter
    /*!
      \param option is option to verify
    */
    void removeOptions(std::string option);

    //! return list of different options
    /*!
      \param void
      \return std::vector<std::string>, represent list of options
    */
    std::vector<std::string> getOptions();

    //! return base time
    /*!
      \param void
      \return int, represent base time
    */
    int getBaseTime();

    //! return numbers of kitchens
    /*!
      \param void
      \return int, represent number of kitchens
    */
    int getNumbersOfKitchens();

    //! return numbers of cookers
    /*!
      \param void
      \return int, represent number of cookers
    */
    int getNumbersOfCookers();

    //! this function parse the entry, she initialize base time, numbers of kitchens and number of cookers
    /*!
      \param void
      \return void
    */
    void initParser(int argc, char* argv[]);

    //! this function verify if elem is number
    /*!
      \param elem is string, represent element
      \return true if elem is number else return false
    */
    bool isNumber(std::string elem);

private:
    std::vector<std::string> options; /*!< List of different options  */
    int baseTime;
    int numbersOfKitchens;
    int numbersOfCookers;
};

#endif //PLAZZA_PARSERCONFIG_H
