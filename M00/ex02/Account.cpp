#include "Account.hpp"
#include <sys/_types/_time_t.h>
#include <iostream>
#include <ctime>

int			Account::_nbAccounts;
int			Account::_totalAmount;
int			Account::_totalNbDeposits;
int			Account::_totalNbWithdrawals;

static void put_time()
{
	time_t		tmp;
	struct tm*	timeinfo;
	char		buf[100];

	time(&tmp);
	timeinfo = localtime(&tmp);
	strftime(buf, sizeof(buf), "[%Y%m%d_%H%M%S] ", timeinfo);
	std::cout << buf;
}
Account::Account( int initial_deposit )
{
	this->_accountIndex = _nbAccounts++;
	_totalNbDeposits += initial_deposit;
	_amount += initial_deposit;
}

Account::~Account()
{

}

int Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return _totalAmount;
}

int Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
	put_time();
	std::cout << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_amount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (_amount - withdrawal < 0)
		return false;
	_amount -= withdrawal;
	return true;
}

int	Account::checkAmount() const
{
	return _amount;
}

void	Account::displayStatus() const
{
	put_time();
	std::cout << "index:" << _accountIndex
			  << ";amount:" <<  _amount;
	std::cout << std::endl;
}
