#### CPP
## Build and Compile Instructions

The quick build command is `Ctrl+Shift+B` --> following this select "C/C++ g++.exe build active file"
Build a file from terminal/cmdline: `g++ -o <Desired file name> sourceFileName.cpp`
Run a file in terminal: `.\executableFileName`

When linking together multiple different files, simply include them one after the other like so: `g++ -o <Desired file name> source1.cpp source2.cpp`

## Notes

## Namespace

- Adding a `using namespace std` to the top of the file eliminates the need to type `std::cout` etc. all the time, instead replacing it with `cout` alone.
- Should be used carefully though, and perhaps should not be used for larger projects.

# cin

- There is a different between `cin` and `cin.get()`. Use `cin >> varName` when trying to pass in numerical input from keyboard into a variable.

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

# Static for variables, classes and structs

- Marking a variable with the `static` keyword ensures the variable is not available globally
- The static keyword also ensures that the linker does not pick up the variable (if another variable with the same name exists in a different file), and so does not lead to a compilation error
- If a static variable is defined in a different file, and you want to refer to that same variable in a different translation unit, this can be done with the `extern` keyword like so:
  File 1: `static int s_Var = 5` | File 2: `extern int s_Var`.

- Static variables that are inside a class are shared between class instances (i.e. instantiating two different class objects will still share the same static class variables)
- Static methods are similar to the above. Static methods also cannot access non-static variables.
- Normally, nonstatic methods have a member of the instantiated class passed to them by default. This is not the case for static methods, which instead explicitly need an object passed to them.

# Enum

- The `enum` keyword is used to group a collection of related variables (which take on integer values), automatically initializing each variable to carry
  a sequential value to the previous variable

# Constructors

- We can initialize a constructor by simply declaring a "typeless function" within the body of the class. For instance, if we declared a class: `class Food{};`
  we would then be able to declare our constructor within like so: `class Food{ public: Food(){ --Any (variable) initialization can go here-- } };`
- This works so long as we do not make our constructor static, in which case the same type of constraints are applied to it as in the section on static methods above

# Destructors

- We can initialize a destructor by simply declaring a "typeless function" within the body of the class. For instance, if we declared a class: `class Food{};`
  we would then be able to declare our destructor within like so: `class Food{ public: ~Food(){ --Any (variable) teardown can go here-- } };`
- The difference between the constructor and destructor syntax is the existence of the `~` in front of the destructor method name.