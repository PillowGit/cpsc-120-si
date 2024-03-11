## Double Precision & If statements

When it comes to decimals (floats & doubles), using `(x == y)` is not a good idea. The numbers `2.0000000001` and `2.0` are so similar they are almost equal, but `(x == y)` still returns false!

Instead, we are going to practice comparing floats & doubles using a set precision!

Here's an example of that logic:
```cpp
double given{4.999815};
double goal{5.0};
double precision{0.001};

// This checks the range of decimals given a precision, instead of
// checking if they are exactly equal, which is rarely true
if (goal - precision <= given && given <= goal + precision) {
  std::cout << given << " is close enough to " << goal << "!\n";
} else {
  std::cout << given << " is not close enough to " << goal << ".\n";
}
```

### Tasks:

1. Include the iostream header
2. Use the `GetDoubleInput()` for step 2 in main. This calls on cin and converts it to a double for you!
3. Do step 3
4. Write an if-statement that checks the range of valid decimals to validate the users input
5. Print out if their statement was close enough to `30.0` given their precision
6. Test your code with `./run.sh`