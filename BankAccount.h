#include <iostream>
#include <cmath> //for math

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

using namespace std;

/**
 * A Bank Account keeps track of the an account balance
 * and applies yearly interest rates.
 */
class BankAccount {
public:

    //declaring constructors
    BankAccount(int dollars, int cents, double rate);
    BankAccount(int dollars, double rate);
    BankAccount();

    //two versions of set function to capture overloaded cases:
    /**
     * Sets the dollars, cents and rate for the BankAccount
     * @param dollars
     * @param cents
     * @param rate Interest rate for the account.
     */
    void set(int dollars, int cents, double rate);
    /**
     * Sets the dollar and interest rate for the account
     * @see set(int dollars, int cents, double rate) if you need to set the cents as well
     * @param dollars
     * @param rate
     */
    void set(int dollars, double rate);

    /**
     * One year of simple interest is been applied to the account balance.
     */
    void update();

    /**
     * @return the current account balance
     */
    double getBalance();
    /**
     *
     * @return the interest rate
     */
    double getRate();

    /**
     * Outputs the account information to a stream
     * @param outs ostream for displaying account information
     */
    void output(ostream& outs);

private:

    int dollarsPart;
    int centsPart;
    double interestRate;

    /**
     * Converts a percentage to a fraction
     * for example, fraction (50.3) returns a 0.503
     * @param percent
     * @return Fraction Value
     */
    double fraction(double percent);

    /**
    * Converts a percentage to a fraction
    * for example, fraction (0.503) returns a 50.3
    * @param fractionValue
    * @return percentage
    */
    double percent(double fractionValue);

};


#endif // BANKACCOUNT_H
