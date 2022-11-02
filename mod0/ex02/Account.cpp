#include "Account.h"
#include <iostream>
#include <string>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts() {
    return _nbAccounts;
}

int Account::getNbDeposits() {
    return _totalNbDeposits;
}

int Account::getTotalAmount() {
    return _totalAmount;
}

int Account::getNbWithdrawals() {
    return _totalNbWithdrawals;
}

Account::Account(int initial_deposit) {
    _displayTimestamp();
    _amount = initial_deposit;
    _accountIndex = _nbAccounts;
    _displayTimestamp();
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "created" << std::endl;
}

Account::~Account() {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "closed" << std::endl;
}

void Account::displayAccountsInfos() {
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";";
    std::cout << "total:" << _totalAmount << ";";
    std::cout << "deposits:" << _totalNbDeposits <<";";
    std::cout <<"withdrawals:" << _totalNbWithdrawals << std::endl;
}
void Account::displayStatus() const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void) {
    time_t t = time(0);
    struct tm *tm = localtime(&t);
    std::cout << "[" << tm->tm_year + 1900 << tm->tm_mon + 1 << tm->tm_mday << "_";
    std::cout << tm->tm_hour << tm->tm_min << tm->tm_sec << "]";

}

void Account::makeDeposit(int deposit) {
    _displayTimestamp();
    _nbDeposits++;
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    std::cout << "deposits:" << _totalNbDeposits << ";";
    std::cout << "amount:" << _amount + deposit << ";";
    std::cout << "nb_deposits:" << _nbDeposits << std::endl;
    _amount += deposit;
    _totalAmount += deposit;
    _totalNbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    if (_amount - withdrawal > 0){
        _nbWithdrawals++;
        std::cout << "withdrawal:" << withdrawal << ";";
        _amount -= withdrawal;
        std::cout << "amount:" << ";";
        std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;
        return true;
    }
    else{
        std::cout << "index:" << _accountIndex << ";";
        std::cout << "p_amount:" << _amount << ";";
        std::cout << "withdrawals:refused" << std::endl;
        return false;
    }
}