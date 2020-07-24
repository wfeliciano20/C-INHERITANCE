#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
    : Savings_Account{name, balance, int_rate}, num_withdrawals{0}
{
}

bool Trust_Account::deposit(double amount)
{
    if (amount >= BONUS_THRESHOLD)
    {
        amount += BONUS;
    }
    return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount)
{
    if (num_withdrawals <= MAX_WITHDRAWS && amount <= (balance * MAX_PERCENTAGE))
    {
        num_withdrawals++;
        return Savings_Account::deposit(amount);
    }
    else
    {
        return false;
    }
}

std::ostream &operator<<(std::ostream &out, const Trust_Account &account)
{
    out << "[Trust Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%, withdrawals: " << account.num_withdrawals << "]";
    return out;
}