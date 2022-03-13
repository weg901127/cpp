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
	_totalAmount += initial_deposit;
	_amount += initial_deposit;
	put_time();
	std::cout << "index:" << _accountIndex
			  << ";amount:" <<  _amount
			  << ";created";
	std::cout << std::endl;
}

Account::~Account()
{
	put_time();
	std::cout << "index:" << _accountIndex
			  << ";amount:" <<  _amount
			  << ";closed";
	std::cout << std::endl;
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
	std::cout << "accounts:" << getNbAccounts()
			  << ";total:" << getTotalAmount()
			  << ";deposits:" << getNbDeposits()
			  << ";withdrawals:" << getNbWithdrawals();
	std::cout << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	int	p_amt;

	p_amt = _amount;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	put_time();
	std::cout << "index:" << _accountIndex
			  << ";p_amount:" <<  p_amt
			  << ";deposit:" << deposit
			  << ";amount:" << _amount
			  << ";nb_deposits:" << _nbDeposits;
	std::cout << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	int	p_amt;

	p_amt = _amount;
	if (_amount - withdrawal < 0)
	{
		put_time();
		std::cout << "index:" << _accountIndex
				  << ";p_amount:" <<  p_amt
				  << ";withdrawal:refused" << std::endl;
		return false;
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	put_time();
	std::cout << "index:" << _accountIndex
			  << ";p_amount:" <<  p_amt
			  << ";withdrawal:" << withdrawal
			  << ";amount:" << _amount
			  << ";nb_withdrawals:" << _nbWithdrawals;
	std::cout << std::endl;
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
			  << ";amount:" <<  _amount
			  << ";deposits:" <<  _nbDeposits
			  << ";withdrawals:" <<  _nbWithdrawals;
	std::cout << std::endl;
}
