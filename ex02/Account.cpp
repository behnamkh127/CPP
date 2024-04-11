/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:41:38 by bekhodad          #+#    #+#             */
/*   Updated: 2024/04/11 10:19:09 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(){
	std::time_t	currentTime = std::time(0);
	std::tm* localTime = std::localtime(&currentTime);
	char dateTime[20];
	std::strftime(dateTime, sizeof(dateTime), "[%Y%m%d_%H%M%S]", localTime);
	std::cout <<  dateTime << ' ';	
}

int Account::getNbAccounts(){
	return _nbAccounts;
}
int Account::getTotalAmount(){
	return _totalAmount;
}
int Account::getNbDeposits(){
	return _totalNbDeposits;
}
int Account::getNbWithdrawals(){
	return _totalNbWithdrawals;
}
void Account::displayAccountsInfos(){
	Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ';';
	std::cout << "total:" << getTotalAmount() << ';';
	std::cout << "deposits:" << getNbDeposits() << ';';
	std::cout << "withdrawals:" << getNbWithdrawals() << '\n';
}
void	Account::displayStatus(void) const {
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';';
	std::cout << "amount:" << _amount << ';';
	std::cout << "deposits:" << _nbDeposits << ';';
	std::cout << "withdrawals:" << _nbWithdrawals << '\n';
}

Account::Account(int amount){
	_amount = amount;
	_totalAmount += _amount;
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';';
	std::cout << "amount:" << _amount << ";created\n";
}

Account::~Account(){
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';';
	std::cout << "amount:" << _amount << ";closed\n";
}

void	Account::makeDeposit(int deposit){
	int	p_amount = _amount;
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';';
	std::cout << "p_amount:" << p_amount << ';';
	std::cout << "deposit:" << deposit << ';';
	std::cout << "amount:" << _amount << ';';
	std::cout << "nb_deposits:" << _nbDeposits << '\n';
}

int	Account::checkAmount(void)const{
	return(_amount);
}

bool	Account::makeWithdrawal(int withdrawal){
	if (withdrawal > checkAmount()){
		Account::_displayTimestamp();
		std::cout << "index:" << _accountIndex << ';';
		std::cout << "p_amount:" << _amount << ';';
		std::cout << "withdrawal:" << "refused" << '\n';
		return false;
	}
	int p_amount = _amount;
	_amount = p_amount - withdrawal;
	_nbWithdrawals++; 
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';';
	std::cout << "p_amount:" << p_amount << ';';
	std::cout << "withdrawal:" << withdrawal << ';';
	std::cout << "amount:" << _amount << ';';
	std::cout << "nb_withdrawals:" << _nbWithdrawals << '\n';
	return true;
}
