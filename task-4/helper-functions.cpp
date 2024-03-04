// Notice that we did not include <string>, but we can still use std::string.
// This is because we included <string> in the header file, and we included
// that header file, so we have <string> here as well!
#include "helper-functions.hpp"

// Don't worry if you don't understand this yet :)
int StringLength(std::string word) {
    return word.length();
}