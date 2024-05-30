/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 18:25:05 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/30 15:13:41 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

void	Account::_displayTimestamp( void ) {
	std::time_t	current_time;
	std::tm		*formated_time;
	char		buff[16];

	current_time = std::time(nullptr);
	formated_time = std::localtime(&current_time);
	std::strftime(buff, sizeof(buff), "%Y%m%d_%H%M%S", formated_time);
	buff[15] = '\0';
	std::cout << "[" << buff << "]";
}

Account::Account(int initial_deposit) {
	_nbAccounts++;
	this->_accountIndex = _nbAccounts - 1;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << " " \
				<< "index:" << this->_accountIndex \
				<< ";amount:" << this->_amount \
				<< ";created" << std::endl;
}

Account::~Account() {
	_nbAccounts--;
	_displayTimestamp();
	std::cout << " " \
				<< "index:" << this->_accountIndex \
				<< ";amount:" << this->_amount \
				<< ";closed" << std::endl;
}

void	Account::makeDeposit(int deposit) {
	_displayTimestamp();
	std::cout << " " \
				<< "index:" << this->_accountIndex \
				<< ";p_amount:" << this->_amount \
				<< ";deposit:" << deposit;
	this->_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
	this->_nbDeposits++;
	std::cout << ";amount:" << this->_amount \
				<< ";nb_deposits:" << this->_nbDeposits \
				<< std::endl;
}

bool	Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout << " " \
				<< "index:" << this->_accountIndex \
				<< ";p_amount:" << this->_amount;
	if (withdrawal > this->_amount) {
		std::cout << ";withdrawal:" \
					<< "refused" << std::endl;
		return false;
	}
	this->_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	this->_nbWithdrawals++;
	std::cout << ";withdrawal:" << withdrawal \
				<< ";amount:" << this->_amount \
				<< ";nb_withdrawals:" << this->_nbWithdrawals \
				<< std::endl;
	return true;
}

int	Account::checkAmount(void) const {
	return this->_amount;
}

void	Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout << " " \
				<< "index:" << this->_accountIndex \
				<< ";amount:" << this->_amount \
				<< ";deposits:" << this->_nbDeposits \
				<< ";withdrawals:" << this->_nbWithdrawals \
				<< std::endl;
}

int		Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int		Account::getTotalAmount( void )
{
	return _totalAmount;
}

int		Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int		Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << " " \
				<< "accounts:" << getNbAccounts() \
				<< ";total:" << getTotalAmount() \
				<< ";deposits:" << getNbDeposits() \
				<< ";withdrawals:" << getNbWithdrawals() \
				<< std::endl;
}
