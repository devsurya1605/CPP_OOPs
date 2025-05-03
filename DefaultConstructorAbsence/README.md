# User-Defined Constructor and Default Constructor

## Question
What happens if you provide a class with a user-defined constructor but do not provide a default constructor, and you attempt to create an object without arguments?

## Correct Answer
It results in a compiler error.

## Explanation
The main reason you get a compilation error when trying to create an object of a class with a user-defined constructor but without a default constructor is that the compiler-generated default constructor is implicitly deleted when you provide any user-defined constructor.

When you provide a user-defined constructor in a class, the compiler does not automatically generate a default constructor for you. As a result, if you attempt to create an object of the class without providing any arguments, there is no matching constructor available to initialize the object. This leads to a compilation error.
