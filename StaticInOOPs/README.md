# Static in OOPs

In C++, the `static` keyword can also be used within a class to define static data members and static member functions.

## Static Data Members
Static data members belong to the class itself, rather than to individual objects created from the class. They are shared among all instances of the class and are initialized only once, typically at the beginning of the program.

## Static Member Functions
Static member functions are associated with the class rather than with instances of the class. They can only access static data members and other static member functions of the class.

## Note
In C++, the scope resolution operator `::` is used to access elements (variables, functions, classes, etc.) that belong to a particular scope, such as a namespace or a class. You can use the scope resolution operator to access static data members and static member functions of a class.

### Example Explanation
- `staticCounter` is a static data member shared among all instances of `MyClass`.
- In the constructor of `MyClass`, `staticCounter` is incremented each time an object is created.
- The `displayCounter()` static member function is able to access the static data member and display its value.
- In the `main()` function, two `MyClass` objects are created, and then the `displayCounter()` function is called to show the value of `staticCounter`.
