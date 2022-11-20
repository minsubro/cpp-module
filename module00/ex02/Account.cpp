#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts;
int Account::_totalAmount;
int Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

Account::Account(int initial_deposit) {
	Account::_displayTimestamp();
	this->_accountIndex = this->_nbAccounts;
	this->_nbAccounts++;
	this->_amount = initial_deposit;
	this->_totalAmount += _amount;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << " index:" << this->_accountIndex << ";amount:" <<
		initial_deposit << ";created" << std::endl;
}

Account::~Account(void) {
	this->_totalAmount -= this->_amount;
	this->_totalNbDeposits -= this->_nbDeposits;
	this->_totalNbWithdrawals -= this->_nbWithdrawals;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
		<< ";amount:" << this->_amount
		<< ";closed" << std::endl;
}

int	Account::getNbAccounts(void) {
	return Account::_nbAccounts;
}

int	Account::getTotalAmount(void) {
	return Account::_totalAmount;
}

int	Account::getNbDeposits(void) {
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals(void) {
	return Account::_totalNbWithdrawals;
}

void	Account::_displayTimestamp(void) {
	time_t timer = time(NULL);

	struct tm* t = localtime(&timer);
	std::cout << "[" << t->tm_year + 1900 << t->tm_mon + 1 << t->tm_mday << "_"
		<< t->tm_hour << t->tm_min << t->tm_sec << "]";
}

void	Account::displayAccountsInfos(void) {
	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::getNbAccounts()
		<< ";total:" << Account::getTotalAmount() 
		<< ";deposits:" << Account::getNbDeposits()
		<< ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
		<< ";amount:" << this->_amount
		<< ";deposits:" << this->_nbDeposits
		<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit) {
	_displayTimestamp();
	int temp = this->_amount + deposit;
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	this->_totalAmount += deposit;
	std::cout << " index:" << this->_accountIndex
		<< ";p_amount:" << this->_amount
		<< ";deposit:" << deposit
		<< ";amount:" << temp
		<< ";nb_deposits:" << this->_nbDeposits << std::endl;
	this->_amount = temp;
}

bool	Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	int temp = this->_amount - withdrawal;
	if (temp < 0) {
		std:: cout << " index:" << this->_accountIndex
			<< ";p_amount:" << this->_amount
			<< ";withdrawal:refused" << std::endl;
		return (false);
	}
	this->_nbWithdrawals++;
	this->_totalNbWithdrawals++;
	this->_totalAmount -= withdrawal;
	std::cout << " index:" << this->_accountIndex
		<< ";p_amount:" << this->_amount
		<< ";withdrawal:" << withdrawal
		<< ";amount:" << temp
		<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	this->_amount = temp;
	return (true);
}