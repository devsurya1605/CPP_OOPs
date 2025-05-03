#include<iostream>
class Animal
{
protected:
    std::string name;
public:
    Animal(std::string name_):name(name_){}
    void lives()
    {
        std::cout<<name<<" lives on earth\n";
    }
};
class Mammal:public Animal
{
protected:
    int legs;
public:
    Mammal(std::string name_,int legs_):Animal(name_),legs(legs_){}
    void numlegs()
    {
        std::cout<<name<<" has "<<legs<<" legs\n";
    }
};

class Dog:public Mammal
{
protected:
    int age;
public:
    Dog(std::string name_,int legs_,int age_):Mammal(name_,legs_),age(age_){}
    void getage()
    {
        std::cout<<name<<" is a "<<legs<<" leg animal and his/her age is "<<age<<"\n";
    }
};

int main()
{
    Dog doggo("Kallu",4,13);
    doggo.lives();
    doggo.numlegs();
    doggo.getage();
}