#ifndef FUNCS_H
#define FUNCS_H

#include <iostream>
#include <vector>
#include <string>

void PrintVector(std::vector<int> &v) {
    if (v.empty()) {
        std::cout << "Your vector is empty" << std::endl;
        return;
    }
    std::string output = "[ ";
    for (const auto& e : v) {
        output += std::to_string(e) + ", ";
    }
    output.pop_back();
    output.pop_back();
    output += " ]";
    std::cout << "Your vector: " << output << std::endl;
}

bool HasName(std::vector<std::string> &names, std::string name) {
    for (const auto& n : names) {
        if (n == name) {
            return true;
        }
    }
    return false;
}

std::vector<int> SampleVector() {
    std::vector<int> v = {458, -9, 0, 32, 1, INT32_MAX, -2};
    return v;
}

#endif