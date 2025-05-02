#include<iostream>
class BankAccount
{
public:
    static int totalBalance;
    int balance;
    BankAccount(int money)
    {
        totalBalance+=money;
    }
};

int BankAccount::totalBalance = 0;

int main()
{   
    int amount;
    std::cin>>amount;
    BankAccount acc1(amount);
    std::cin>>amount;
    BankAccount acc2(amount);
    std::cout<<BankAccount::totalBalance<<"\n";
}