#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_

#include <string>
#include "Savings_Account.h"

class Trust_Account : public Savings_Account
{
    friend std::ostream &operator<<(std::ostream &out, const Trust_Account &account);

private:
    static constexpr const char *def_name = "Unnamed Trust Account";
    static constexpr const double def_balance = 0.0;
    static constexpr const double def_int_rate = 0.0;
    static constexpr const double def_bonus = 0.0;
    static constexpr const double BONUS = 50.0;
    static constexpr const double BONUS_THRESHOLD = 5000.0;
    static constexpr const int MAX_WITHDRAWS = 3;
    static constexpr const double MAX_PERCENTAGE = 0.2;

protected:
    int num_withdrawals;

public:
    Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
    bool deposit(double amount);
    bool withdraw(double amount);
};

#endif