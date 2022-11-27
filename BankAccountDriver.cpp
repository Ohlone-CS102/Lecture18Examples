
#include <iostream>
#include "BankAccount.h"

using namespace std;

int main() {
    BankAccount account1(100, 2.3), account2;

    //note that no parenthesis are used for account 2/
    //account2 call uses the default constructor
    cout << "account1 initialized as follows: \n";
    account1.output(cout);
    cout << "account2 initialized as follows: \n";
    account2.output(cout);

    account1 = BankAccount(999, 99, 5.5);
    cout << "account1 reset to the following: \n";
    account1.output(cout);
    return 0;
}
