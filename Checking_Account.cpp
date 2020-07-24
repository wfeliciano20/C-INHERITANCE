#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance)
    : Account{name, balance}
{
}

bool Checking_Account::withdraw(double amount)
{
    amount += per_check_fee;
    return Account::withdraw(amount);
}

std::ostream &operator<<(std::ostream &out, const Checking_Account &account)
{
    out << "[Checking_Account: " << account.name << ": " << account.balance << "]";
    return out;
}