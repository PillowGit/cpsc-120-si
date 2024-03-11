#ifndef FUNCS_H
#define FUNCS_H

#include <iostream>
#include <string>

double GetDoubleInput() {
    std::string input{""};
    std::cin >> input;
    return std::stod(input);
}

#endif