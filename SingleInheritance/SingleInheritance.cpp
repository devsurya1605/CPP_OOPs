#include<iostream>

class Animal
{
protected:
    std::string name;
public:
    Animal(std::string name_):name(name_){}
    void eats()
    {
        std::cout<<name<<" is eating\n";
    }
    void sleeps()
    {
        std::cout<<name<<" is sleeping\n";
    }
};

class Dog:public Animal
{   
protected:
    int age;
public:
    Dog(std::string name_, int age_):Animal(name_),age(age_){}
    void tellage()
    {
        std::cout<<name<<" is "<<age<<" years old\n";
    }
};
int main()
{
    Dog Doggo("Kallu",8);
    Doggo.sleeps();
    Doggo.eats();
    Doggo.tellage();
}