#include "Account.h"
#include <iostream>
#include <string>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

static int Account::getNbAccounts() {
    return _nbAccounts;
}

static int Account::getNbDeposits() {
    return _totalNbDeposits;
}

static int Account::getTotalAmount() {
    return _totalAmount;
}

static int Account::getNbWithdrawals() {
    return _totalNbWithdrawals;
}

Account::Account(int initial_deposit) {
    _amount = initial_deposit;
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "created" << std::endl;
}

void Account::displayStatus() const {
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}
//static void Account::displayAccountsInfos() {
//    std::cout << "index"
//}