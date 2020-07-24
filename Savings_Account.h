#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_

#include "Account.h"

/*
Savings Account is a type of Account
adds an interest rate
withdraw = sames as a regular account
deposit
    Ammount supplied to deposit will be incremented 
    by(account * int_rate/100)
    and then the updated amount will be deposited
*/

class Savings_Account : public Account
{
    friend std::ostream &operator<<(std::ostream &out, const Savings_Account &account);

private:
    // static constexpr const char *def_name = "Unnamed Savings Account";
    // static constexpr double def_balance = 0.0;
    // static constexpr double def_int_rate = 0.0;

protected:
    double int_rate;

public:
    Savings_Account(std::string name = "Unnamed Savings Account", double balance = 0.0, double int_rate = 0.0);
    bool deposit(double amount);
};

#endif