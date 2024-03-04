# Header files & Source files

We are now going to demonstrate using a header file along with a source code file!

In the last task, we used `main.cpp` to bring in code from `print-functions.hpp`. This allowed us to write all our useful functions in the `.hpp` file, then bring them over to the `main.cpp` file when we need them without writing a ton of text in `main.cpp`!

We're going to demonstrate this again, but now, `print-functions.hpp` will **not** include the code for the functions that it imorts. Instead, the purpose of `print-functions.hpp` is **solely** to tell us the names and purposes of the functions we're importing. Once `print-functions.hpp` is imported, it will actually import the code for how it's functions work from the source file, `print-functions.cpp`.

```
main.cpp
  └─ print-functions.hpp
      └─ print-functions.cpp
```

## Tasks:

1. In `print-functions.hpp`, **declare** the missing function as instructed
2. In `print-functions.cpp`, **define** the missing function as instructed
3. Include the header file in `main.cpp`
4. Follow the instructions in `main.cpp` to demonstrate the functions imported from the header file
5. Test your code
