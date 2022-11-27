
#include "BankAccount.h"

BankAccount::BankAccount(int dollars, int cents, double rate) {
    if (dollars < 0 || cents < 0 || rate < 0)
    {
        cout << "Illegal values for money or interest rate.\n";
        return;
    }

    dollarsPart = dollars;
    centsPart = cents;
    interestRate = fraction(rate);//moved fraction to definition of constructors
}

BankAccount::BankAccount(int dollars, double rate) {
    if (dollars < 0 || rate < 0) {
        cout << "Illegal values for money or interest rate.\n";
        return;
    }

    dollarsPart = dollars;
    centsPart = 0;
    interestRate = fraction(rate);//moved fraction to definition of constructors
}

BankAccount::BankAccount() : dollarsPart(0), centsPart(0), interestRate(0.0) {
//body intentionally left empty.  this is the default
//constructor
}

double BankAccount::fraction(double percentValue) {
    return(percentValue / 100.0);
}

//uses cmath
void BankAccount::update() {
    double balance = getBalance();
    balance = balance + interestRate * balance;
    dollarsPart = static_cast<int>(floor(balance));
    centsPart = static_cast<int>(floor(balance - dollarsPart) * 100);
}

double BankAccount::getBalance() {
    return (dollarsPart + 0.01 * centsPart);
}

double BankAccount::percent(double fractionValue) {
    return (fractionValue * 100);
}

double BankAccount::getRate() {
    return percent(interestRate);
}

void BankAccount::output(ostream& outs){
    //use functions getBalance and getRate to ensure
    //that the output is in the correct units
    outs.setf(ios::fixed);
    outs.setf(ios::showpoint);
    outs.precision(2);
    outs << "Account balance $" << getBalance() << endl;
    outs << "Interest rate " << getRate() << "%" << endl;
}

void BankAccount::set(int dollars, int cents, double rate)
{
    if (dollars < 0 || cents < 0 || rate < 0)
    {
        cout << "Illegal values for money or interest rate.\n";
        return;
    }
    dollarsPart = dollars;
    centsPart = cents;
    interestRate = fraction(rate);
}

void BankAccount::set(int dollars, double rate)
{
    if (dollars < 0 || rate < 0)
    {
        cout << "Illegal values for money or interest rate.\n";
        return;
    }
    dollarsPart = dollars;
    interestRate = fraction(rate);
}