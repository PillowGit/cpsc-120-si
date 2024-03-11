// Importing utility functions
#include "../utils/funcs.hpp"
// funcs.hpp includes things like:
// 
// void PrintVector(std::vector<int> numbers);
// bool HasName(std::vector<std::string> names, std::string name);
// std::vector<int> SampleVector();

#include <vector>

int main() {

    // Don't look at what SampleVector() returns, try to figure this out
    // without looking at the numbers
    std::vector<int> numbers{};
    numbers = SampleVector(); 


    // Step 1:
    // Print out the size of the vector "numbers"


    // Step 2:
    // Print out the 4th element of the vector "numbers"


    // Step 3:
    // Print out if the element at the front of "numbers"
    // is an even number


    // Step 4: 
    // Print out if the element at the back of "numbers"
    // is equal to the element at the front


    // Step 5:
    // Add the element at the front of "numbers" to the 
    // back of it


    // Step 6:
    // Print out the vector "numbers" using the PrintVector 
    // function


    // Step 7: 
    // Clear out the vector and print it again


    return 0;
}