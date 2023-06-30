#include "../inc/Account.hpp"

#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void) {
    time_t now;
    char timeStr[20];

    now = time(NULL);
    strftime(timeStr, sizeof(timeStr), "[%Y%m%d_%H%M%S] ", localtime(&now));
    std::cout << timeStr;
}


Account::Account(int initial_deposit) {
    this->_accountIndex = this->_nbAccounts;
    _displayTimestamp();
    std::cout << "index: " << this->_nbAccounts << ";" << " amount: " << initial_deposit << "; created" << std::endl;
    this->_nbAccounts += 1;
    this->_amount = initial_deposit;
    this->_totalAmount += initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
}

Account::~Account() {
    _displayTimestamp();
    std::cout << "index: " << this->_accountIndex << ";" << " amount: " << this->_amount << "; closed" << std::endl;
    this->_nbAccounts -= 1;
}

void Account::displayAccountsInfos() {
    _displayTimestamp();
    std::cout << "accounts: " << _nbAccounts << ";" << " total: " << _totalAmount << ";deposits: " << _totalNbDeposits << ";withdrawls: " << _totalNbWithdrawals << std::endl;
}

void Account::displayStatus() const {
    _displayTimestamp();
    std::cout << "index: " << this->_accountIndex << ";" << " amount: " << this->_amount << ";deposits: " << this->_nbDeposits << ";withdrawls: " << this->_nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit) {
    this->_nbDeposits += 1;
    int p_amount = this->_amount;
    _totalAmount -= this->_amount;
    this->_amount += deposit;
    _totalAmount += this->_amount;
    _displayTimestamp();
    std::cout << "index: " << this->_accountIndex << ";" << " p_amount: " << p_amount << ";deposit: " << deposit << ";amount: " << this->_amount << ";nb_deposits: " << this->_nbDeposits << std::endl;
    _totalNbDeposits += 1;
}

bool Account::makeWithdrawal(int withdrawal) {
    if (this->_amount - withdrawal < 0)
    {
        _displayTimestamp();
        std::cout << "index: " << this->_accountIndex << ";" << " p_amount: " << this->_amount << ";withdrawl: " << "refused" << std::endl;
        return (false);
    }
    int p_amount = this->_amount;
    this->_amount -= withdrawal;
    this->_nbWithdrawals += 1;
    _displayTimestamp();
    std::cout << "index: " << this->_accountIndex << ";" << " p_amount: " << p_amount << ";withdrawl: " << withdrawal << ";amount: " << this->_amount << ";nb_withdrawls: " << this->_nbWithdrawals << std::endl;
    _totalNbWithdrawals += 1;
    _totalAmount -= withdrawal;
    return (true);
}