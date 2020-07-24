#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_

#include <string>
#include "Account.h"

class Checking_Account : public Account
{
    friend std::ostream &operator<<(std::ostream &out, const Checking_Account &account);

private:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr const double def_balance = 0.0;
    static constexpr const double per_check_fee = 1.50;

public:
    Checking_Account(std::string name = def_name, double balance = def_balance);
    bool withdraw(double amount);
};

#endif