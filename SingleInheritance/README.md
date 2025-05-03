# Single Inheritance in C++

## Overview
In C++, single inheritance refers to a class inheriting from only one base class. This allows for a clear and straightforward relationship between the base class and the derived class.

## Example Description

The given code is an example of single inheritance:

- We have a base class `Animal` with two methods: `Eat` and `Sleep`. The `Animal` class has a constructor that takes the name of the animal as an argument.
  
- We then define a derived class `Dog` that inherits from the `Animal` class using the public access specifier. This means that the public members of the `Animal` class are accessible in the `Dog` class.

- The `Dog` class has an additional method `Bark`, which is specific to dogs.

- In the main function, we create an instance of the `Dog` class named `myDog` and call methods from both the base class (`Eat` and `Sleep`) and the derived class (`Bark`) using the `myDog` object.

## Conclusion
This example illustrates the concept of single inheritance in C++. The derived class `Dog` can access the public members of the base class `Animal`, allowing for code reuse and a clear hierarchical structure.
