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

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
	<< ";closed" << std::endl;
}

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	_nbAccounts++;
	_totalAmount += this->_amount;
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
	<< ";created" << std::endl;
}

Account::Account(void)
{
	_displayTimestamp();
	this->_accountIndex = 0;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
	<< ";closed" << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	int		p_amount = this->_amount;
	this->_nbDeposits++;

	_totalNbDeposits += this->_nbDeposits;
	this->_amount += deposit;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << p_amount
	<< ";deposit:" << deposit << ";amount:" << this->_amount
	<< ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	int		p_amount = this->_amount;
	if (withdrawal <= this->_amount)
	{
		_displayTimestamp();
		this->_nbWithdrawals++;
		_totalNbWithdrawals += this->_nbWithdrawals;
		this->_amount -= withdrawal;
		_totalAmount -= withdrawal;
		std::cout << "index:" << this->_accountIndex <<
		";p_amount:" << p_amount << ";withdrawal:" << withdrawal << ";amount:" <<
		this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	}
	else
	{
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex <<
		";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
	}
	return false;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
	<< ";desposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals
	<< std::endl;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:"
	<< _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawal:"
	<< _totalNbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
	std::time_t			t;
	std::tm				*ltm;
	char			buffer[80];
	std::string		format;

	t = std::time(NULL);
	ltm = std::localtime(&t);
	format = "[%Y%m%d_%H%M%S] ";
	std::strftime(buffer, 80, format.c_str(), ltm);
	std::cout << buffer;
}