#include <iostream>

// Task 1:
// Write a function that checks if a float is actually a whole number
bool IsWhole(float x) {
    return 0;
}


// Task 2:
// Write a function that returns the mathematical floor of a float
// The floor of a number is just rounding down
int Floor(float x) {
    return 0;
}


// Task 3:
// Write a function that properly rounds a float to the nearest whole number
// It should round down or up depdending on the decimal value
int Round(float x) {
    return 0;
}


int main() {

    // Do not touch main, these test your functions automatically

    bool b1{(!IsWhole(5.0))?false:(IsWhole(3.0001))?false:(!IsWhole(0))?false:true},
         b2{(Floor(5.0) != 5)?false:(Floor(3.0001) != 3)?false:(Floor(0) != 0)?false:true},
         b3{(Round(5.0)!=5)?false:(Round(3.0001)!=3)?false:(Round(0)!=0)?false:(Round(3.5)!=4)?false:(Round(3.4)!=3)?false:(Round(3.6)!=4)?false:true};

    if (!b1) {
        std::cout << "The IsWhole function is not working properly\n";
    }
    if (!b2) {
        std::cout << "The Floor function is not working properly\n";
    }
    if (!b3) {
        std::cout << "The Round function is not working properly\n";
    }
    if (b1 && b2 && b3) {
        std::cout << "All functions are working properly!\n";
    }

    return 0;
}