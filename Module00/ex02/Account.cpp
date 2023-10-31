
#include "Account.hpp"

// get fonction

int Account::getNbAccounts(void)
{
	return Account::_nbAccounts;
}

int Account::getTotalAmount(void)
{
	return Account::_totalAmount;
}

int Account::getNbDeposits(void)
{
	return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
	return Account::_totalNbWithdrawals;
}

// Fonction no members
void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "account:" << Account::_nbAccounts << ";total:"
		<< _totalAmount << ";deposits:" << Account::_totalNbDeposits
		<< ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}



//Private no members fonctions
void	Account::_displayTimestamp( void )
{
    std::time_t now = std::time(0);
    std::tm* current_time = std::localtime(&now);
    char buffer[80];
    std::strftime(buffer, 80, "[%Y%m%d_%H%M%S]", current_time);
    std::string str(buffer);
	std::cout << str;
}

// Members fonctions
Account::Account( int initial_deposit ): _accountIndex(_nbAccounts), _nbDeposits(0), _nbWithdrawals(0)
{
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
	_nbAccounts++;
	_amount = initial_deposit;
}
Account::~Account( void )
{

		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

// Fonctions
void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	_nbDeposits = 1;
	std::cout << "index:" << _accountIndex << ";p_amount:"
	<< _amount << ";deposits:" << deposit << ";ammount:"
	<< _amount+deposit << ";nb_deposits:" << _nbDeposits << std::endl;
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
}
bool	Account::makeWithdrawal( int withdrawal )
{
	if (!checkAmount())
	{
		_displayTimestamp();
		_nbWithdrawals = 1;
		std::cout << "index:" << _accountIndex << ";p_amount:"
		<< _amount << ";withdrawal:" << withdrawal << ";ammount:"
		<< _amount-withdrawal << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		return true;
	}
	else
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:"
		<< _amount << ";withdrawal:" << "refused" << std::endl;
		return false;
	}
}

int		Account::checkAmount( void ) const
{
	if (_amount < 100)
		return 1;
	return 0;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:"
		<< _amount << ";deposits:" << _nbDeposits
		<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

//initialisation attribut non membre
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
