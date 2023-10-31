
#include "Account.hpp"


Account::Account( int initial_deposit )
{
}
Account::~Account( void )
{
}

//Fonction non membres
int	Account::getNbAccounts( void )
{
	return Account::_nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return Account::_totalAmount;
}

int	Account::getNbDeposits( void )
{
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return Account::_totalNbWithdrawals;
}
void	Account::displayAccountsInfos( void )
{

}

//Private non membre
void	Account::displayTimestamp( void )
{
}
//Fonction membres
void	Account::makeDeposit( int deposit )
{
}
bool	Account::makeWithdrawal( int withdrawal )
{
}

int		Account::checkAmount( void ) const
{
}

void	Account::displayStatus( void ) const
{
}

//initialisation attribut non membre
int	_nbAccounts;
int	_totalAmount;
int	_totalNbDeposits;
int	_totalNbWithdrawals;
