# Multilevel Inheritance in C++

## Overview
In C++, multilevel inheritance involves a chain of inheritance, where a derived class inherits from a base class, and then another class inherits from that derived class. This creates a hierarchy of classes that can share and extend functionality.

## Example Description

In this example, we will demonstrate multilevel inheritance with protected variables:

- We have a base class `Animal` with a protected member `name`.
  
- We then create an intermediate derived class `Mammal` that inherits from `Animal` and adds a protected member `numLegs`. This class represents a generic mammal.

- Finally, we create the `Dog` class, which inherits from `Mammal`. The `Dog` class is a specific type of mammal, so it inherits both the `name` and `numLegs` members and adds its own method, `Bark`.

- In the main function, we create an instance of the `Dog` class named `myDog` and call methods from all three levels of the inheritance hierarchy (e.g., `Eat` from `Animal`, `Walk` from `Mammal`, and `Bark` from `Dog`).

## Access Control
Protected members are accessible within the class that defines them and in derived classes, but they are not directly accessible from outside the class hierarchy. This allows you to encapsulate data and behavior while still providing access within the inheritance hierarchy.

## Conclusion
Multilevel inheritance in C++ provides a way to create a structured and organized class hierarchy, allowing for code reuse and better data encapsulation while maintaining access control through protected members.
