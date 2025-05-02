#include <iostream>
class MyClass
{
public:
    static int counter;
    MyClass()
    {
        counter++;
    }
    static void displayCounter()
    {
        std::cout<<"Value of Counter: "<<counter<<"\n";
    }
};
int MyClass::counter=0 ;
int main()
{
    MyClass obj1;
    MyClass obj2;
    MyClass::displayCounter();
}