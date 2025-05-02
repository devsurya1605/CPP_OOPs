#include <iostream>
using namespace std;

class BankAccount {
public:
    static int totalBalance;
    int id;
};

int main() {
    BankAccount account1;
    cout << sizeof(account1) << endl;

    return 0;
}