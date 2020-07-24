// Section15 Challenge

#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Account_Util.h"
#include "Checking_Account.h"
#include "Trust_Account.h"

int main()
{
    std::cout.precision(2);
    std::cout << std::fixed;

    //Accounts
    // std::vector<Account> accounts;
    // accounts.push_back(Account{});
    // accounts.push_back(Account{"Larry"});
    // accounts.push_back(Account{"Moe", 2000});
    // accounts.push_back(Account{"Curly", 5000});

    // display(accounts);
    // deposit(accounts, 1000);
    // withdraw(accounts, 2000);

    // //Savings_Accounts
    // std::vector<Savings_Account> sav_accounts;
    // sav_accounts.push_back(Savings_Account{});
    // sav_accounts.push_back(Savings_Account{"Superman"});
    // sav_accounts.push_back(Savings_Account{"Batman", 2000});
    // sav_accounts.push_back(Savings_Account{"Wonderwoman", 5000, 5.0});

    // display(sav_accounts);
    // deposit(sav_accounts, 1000);
    // withdraw(sav_accounts, 2000);

    //Checking_Accounts
    std::vector<Checking_Account> check_accounts;
    check_accounts.push_back(Checking_Account{});
    check_accounts.push_back(Checking_Account{"Flash", 2000});
    check_accounts.push_back(Checking_Account{"Spiderman", 4000});
    check_accounts.push_back(Checking_Account{"Wolvering", 5000});

    display(check_accounts);
    deposit(check_accounts, 1000);
    withdraw(check_accounts, 2000);

    //Trust_Accounts
    std::vector<Trust_Account> trust_accounts;
    trust_accounts.push_back(Trust_Account{});
    trust_accounts.push_back(Trust_Account{"GreenLantern", 3000, 0.5});
    trust_accounts.push_back(Trust_Account{"Ironman", 5000, 0.5});
    trust_accounts.push_back(Trust_Account{"DoctorX", 10000, 0.5});

    display(trust_accounts);
    deposit(trust_accounts, 2000);
    withdraw(trust_accounts, 3500);

    return 0;
}