## If-statement clean up

In this file, we'll discuss proper if statement structure, and how to write our statements more efficiently

### Tasks:

1. View the main.cpp file. Discuss the if-statements. Talk about what they do, what they check, what they might return, etc.
2. Write your own version of the if-statements that you believe is easier to read
3. Run your code with `./run.sh` to ensure your if-statements provide the same results


Below are some sample answers from me

Try not to look at these until you have finished all of your own versions


### Case 1:
```cpp
if (day == "saturday" || day == "sunday" || (hour < 9 || hour > 17)) {
  std::cout << "Closed" << std::endl;
} else {
  std::cout << "Open" << std::endl;
}
```

### Case 2:
```cpp
std::function <bool(int)> is_even2 = [](int x) {
  // ---------------------------------------------------------------------
  return x % 2 == 0;
  // ---------------------------------------------------------------------
};
```

### Case 3:
```cpp
if (grade >= 70) {
  std::cout << "You have above a 70%, you pass" << std::endl;
} else {
  std::cout << "You have below a 70%, you fail" << std::endl;
}
```
