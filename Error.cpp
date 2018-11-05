/*
** EPITECH PROJECT, 2018
** Error.cpp
** File description:
** exception class
*/

#include <exception>
#include <iostream>

class Error: public std::exception {
public:
    Error(std::string const& phrase="") throw()
            :m_phrase(phrase){}

    virtual const char* what() const throw() {
        return m_phrase.c_str();
    }

    virtual ~Error() throw() {
    }

private:
    std::string m_phrase;
};
