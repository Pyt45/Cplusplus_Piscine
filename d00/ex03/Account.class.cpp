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
	std::cout << "index:" << this->_accountIndex << ";amount:"
	<< this->_amount << ";closed";
}

Account::Account(void)
{
	_displayTimestamp();
	this->_accountIndex = 0;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << "index:" << this->_accountIndex <<
	";amount:" << this->_amount << ";created" << std::endl;
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	_totalAmount += this->_amount;
	_nbAccounts++;
	std::cout << "index:" << this->_accountIndex <<
	";amount:" << this->_amount << ";created" << std::endl;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts <<
	";total:" << _totalAmount << ";diposits:" <<
	_totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals <<
	std::endl;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" <<
	this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" <<
	this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	int		p_amount;

	p_amount = this->_amount;
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += this->_amount;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" <<
	p_amount << ":diposit:" << deposit << ";amount:" << this->_amount <<
	";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();

	int		p_amount;

	p_amount = this->_amount;

	if (this->_amount >= withdrawal)
	{
		std::cout << "index:" << this->_accountIndex << "p_amount:" << p_amount <<
		";withdrawal:" << withdrawal;
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		_totalNbWithdrawals++;
		_totalAmount += this->_amount;
		std::cout << ";amount" << this->_amount << ";nb_withdrawals:" <<
		this->_nbWithdrawals << std::endl;
	}
	else
	{
		std::cout << "index:" << this->_accountIndex << ";p_amount:" <<
		p_amount << ";withdrawal:refused" << std::endl;
	}
	return false;
}

void	Account::_displayTimestamp(void)
{
	std::time_t	now;
	std::tm		*ltm;
	std::string	format;
	char		buffer[80];

	now = std::time(0);
	ltm = std::localtime(&now);
	format = "[%Y%m%d_%I%M%S] ";
	std::strftime(buffer, 80, format.c_str(), ltm);
	std::cout << buffer;
}