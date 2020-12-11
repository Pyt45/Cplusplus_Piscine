#include "Account.class.hpp"
#include <iostream>
#include <ctime>

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

int		Account::getNbAccounts(void){ return _nbAccounts; }
int		Account::getTotalAmount(void){ return _totalAmount; }
int		Account::getNbDeposits(void){ return _totalNbDeposits; }
int		Account::getNbWithdrawals(void){ return _totalNbWithdrawals; }

Account::~account(void)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
	<< this->_amount << ";closed";
}

Account::account(void)
{
	_displayTimestamp();
	this->_accountIndex = 0;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_bWithdrawals = 0;
	std::cout << "index:" << this->_accountIndex <<
	";amount:" << this->_amount << ";created" << std::endl;
}

Account::account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_bWithdrawals = 0;
	_displayTimestamp();
	_totalAmount += this->_amount;
	_nbAccounts++;
	std::cout << "index:" << this->_accountIndex <<
	";amount:" << this->_amount << ";created" << std::endl;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout < "accounts:" << _nbAccounts <<
	";total:" << _totalAmount << ";diposits:" <<
	_totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals <<
	std::endl;
}

void	Account::displayStatus(void)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" <<
	this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" <<
	this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	return ;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	return true;
}

void	Account::_displayTimestamp(void)
{
	return ;
}