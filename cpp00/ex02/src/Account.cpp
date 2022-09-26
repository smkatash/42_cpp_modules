/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 19:29:40 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/15 22:58:54 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
	Account::_displayTimestamp();
	this->_accountIndex = Account::_nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbWithdrawals = 0;
	this->_totalAmount = this-> _totalAmount + initial_deposit;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << Account::checkAmount() << ";created" << std::endl;
}

Account::~Account(void) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << Account::checkAmount() << ";closed" << std::endl;
	Account::_nbAccounts--;
	this->_totalAmount -= Account::checkAmount();
}

int	Account::getNbAccounts() {
	return (Account::_nbAccounts);
}
int	Account::getTotalAmount() {
	return (Account::_totalAmount);
}

int	Account::getNbDeposits() {
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals() {
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos() {
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

int	Account::checkAmount(void) const {
	return (this->_amount);
}

void	Account::makeDeposit(int deposit) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << Account::checkAmount() << ";";
	if (deposit < 0)
		std::cout << "deposit:refused" << std::endl;
	else {
		this->_amount += deposit;
		this->_nbDeposits++;
		Account::_totalAmount += deposit;
		Account::_totalNbDeposits++;
		std::cout << "deposit:" << deposit << ";";
		std::cout << "amount:" << Account::checkAmount() << ";";
		std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
	}
}

bool	Account::makeWithdrawal(int withdrawal) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << Account::checkAmount() << ";";
	if (withdrawal < 0 || withdrawal > Account::checkAmount() || Account::checkAmount() - withdrawal < 0){
		std::cout << "withdrawal:refused" << std::endl;
		return false;
	}
	else {
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << Account::checkAmount() << ";";
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return true;
	}
}

void	Account::displayStatus(void) const {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << Account::checkAmount() << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(){

	std::time_t t = std::time(nullptr);
	std::tm tm = *std::localtime(&t);

	std::cout << "[" << std::put_time(&tm, "%Y%d%m_%H%M%S") << "] "; 
}
