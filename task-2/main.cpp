#include <iostream>
#include <functional>

int main() {

    // Case 1:
    // Avoid large condition blocks

    int hour{14};
    std::string day{"saturday"};

    if (day == "monday" ||
        day == "tuesday" ||
        day == "wednesday" ||
        day == "thursday" ||
        day == "friday") {
        if (hour >= 9 && hour <= 17) {
            std::cout << "Open" << std::endl;
        } else {
            std::cout << "Closed" << std::endl;
        }
    } else {
        std::cout << "Closed" << std::endl;
    }
    
    // How would you write this more efficiently?


    // Case 2:
    // Avoid using a condition to return a condition

    // Ignore the silly function syntax, worry about the code in the lines
    std::function <bool(int)> is_even = [](int x) {
        // ---------------------------------------------------------------------
        if (x % 2 == 0) {
            return true;
        } else {
            return false;
        }
        // ---------------------------------------------------------------------
    };

    // How might you write this more efficiently?

    std::function <bool(int)> is_even2 = [](int x) {
        // ---------------------------------------------------------------------
        return 0;
        // ---------------------------------------------------------------------
    };

    std::cout << is_even(4) << std::endl;
    std::cout << is_even2(4) << std::endl;


    // Case 3:
    // Avoid using the logical ! operator if it's not necessary

    float grade{78.5};

    if (!(grade < 70)) {
        std::cout << "You have above a 70%, you pass" << std::endl;
    } else {
        std::cout << "You have below a 70%, you fail" << std::endl;
    }

    // How should you write this so it's more clear

    return 0;
}