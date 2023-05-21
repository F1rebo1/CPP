# CPP
## Build and Compile Instructions

The quick build command is `Ctrl+Shift+B` --> following this select "C/C++ g++.exe build active file"
Build a file from terminal/cmdline: `g++ -o <Desired file name> sourceFileName.cpp`
Run a file in terminal: `.\executableFileName`

When linking together multiple different files, simply include them one after the other like so: `g++ -o <Desired file name> source1.cpp source2.cpp`

## Notes

There is a different between `cin` and `cin.get()`. Use `cin >> varName` when trying to pass in numerical input from keyboard into a variable.

# Pointers and References

- A pointer (like `(int*) ptr = &a`) is a pointer to a memory address of a variable (`a` in this case), and the memory address can be obtained with `&`
- We use `*` to dereference a pointer, so for instance if we have `(int*) value = &a` then we can increment the value of `a` by dereferencing `value` like so: `(*value)++;`
- We can declare a reference like so: `int& ref = a` and now `ref` is a 'reference variable' which refers to the variable a. We can use ref to manipulate the value of a, i.e.: `ref = 2;` would set `a = 2`;

# Classes and Structs

- A class is generally better suited for use when we want to organize a group of variables and/or methods which are related to each other
- A struct is better suited for general data organization (i.e. useful for keeping all declared variables in one location)
- A class is private by default, and we need to include the `public:` keyword in order to have the variables and methods of a class accessible outside of the class
- A struct is public by default, and we need to include the `private:` keyword in order to have the variables and methods of the struct kept private
- We declare a class like so: `class Player{};`
- We declare a struct like so: `struct GroupVars{};`