// Importing utility functions
#include "../utils/funcs.hpp"
// funcs.hpp includes things like:
// 
// double GetDoubleInput();
//     Prints nothing
//     Recieves and returns a double from the user


// Step 1:
// Include the iostream header here
//hi


int main() {

    const double goal{30.0};

    // Step 2:
    // Ask the user for a double that checks how precise they should be
    // Use GetDoubleInput() instead of cin, this function will call cin
    // and return the double to you.


    // Step 3:
    // Ask the user for another double, this one is a variable that should
    // be within the precision of the first double to the number 30
    // i.e., if their precision is 0.01, the number should be 29.99 <= x <= 30.01


    // Step 4:
    // Use an if-statement to check if the second number is within the precision
    // and print the result back to the user


    return 0;
}
