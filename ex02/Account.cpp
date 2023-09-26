/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 20:19:07 by aherbet           #+#    #+#             */
/*   Updated: 2023/05/24 20:19:10 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

Account::Account( int initial_deposit ) {
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_accountIndex = _nbAccounts;
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << checkAmount();
    std::cout << ";created" << std::endl;
    return;
}

Account::~Account( void ) {
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << checkAmount();
    std::cout << ";closed" << std::endl;
    return;
}

int     Account::getNbAccounts( void ) {
    return (Account::_nbAccounts);
}

int	    Account::getTotalAmount( void ) {
    return (Account::_totalAmount);
}

int	    Account::getNbDeposits( void ) {
    return (Account::_totalNbDeposits);
}

int	    Account::getNbWithdrawals( void ) {
    return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ) {
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount();
    std::cout << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals();
    std::cout << std::endl;
}

void	Account::makeDeposit( int deposit ) {
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << checkAmount() << ";deposit:" << deposit;
    this->_amount += deposit;
    this->_nbDeposits++;
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;
    std::cout << ";amount:" << checkAmount() << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
    _displayTimestamp();
    if (withdrawal >= checkAmount())
    {
        std::cout << "index:" << this->_accountIndex << ";p_amount:" << checkAmount() << ";withdrawal:refused" << std::endl;
        return (1);
    }
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << checkAmount() << ";withdrawal:" << withdrawal;
    this->_amount -= withdrawal;
    this->_nbWithdrawals++;
    Account::_totalAmount -= withdrawal;
    Account::_totalNbWithdrawals++;
    std::cout << ";amount:" << checkAmount() << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return (0);
}

int		Account::checkAmount( void ) const {
    return (Account::_amount);
}

void	Account::displayStatus( void ) const {
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << checkAmount();
    std::cout << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals;
    std::cout << std::endl;
}

void	Account::_displayTimestamp( void ) {
    std::time_t timestamp = time(NULL);
    std::tm *now = localtime(&timestamp);
    std::cout << "[" << now->tm_year + 1900 << std::setw(2) << std::setfill('0') << now->tm_mon + 1;
    std::cout << std::setw(2) << std::setfill('0') << now->tm_mday << "_" << std::setw(2) << std::setfill('0');
    std::cout << now->tm_hour << std::setw(2) << std::setfill('0') << now->tm_min << std::setw(2) << std::setfill('0');
    std::cout << now->tm_sec << "] ";
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;