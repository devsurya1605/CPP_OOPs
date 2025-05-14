#include <iostream>

class BankAccount {
public:
    static int totalBalance;
    int id;
};

int main() {
    BankAccount account1;
    std::cout << sizeof(account1) << std::endl;

    return 0;
}