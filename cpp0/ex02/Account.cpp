/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:17:45 by jazarago          #+#    #+#             */
/*   Updated: 2025/06/04 12:00:14 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iomanip>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_accountIndex = this->getNbAccounts();
    this->_amount = initial_deposit;
    std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << \
        ";created" << std::endl;
    Account::_nbAccounts++;
}

Account::~Account( void )
{
    std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << \
        ";closed" << std::endl;
    Account::_nbAccounts--;
}

int Account::getNbAccounts(void)
{
    return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
    return (Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
    return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return (Account::_totalNbWithdrawals);
}

int Account::checkAmount(void) const
{
    return (this->_amount);
}

void	Account::displayAccountsInfos(void)
{
    std::cout << " accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount();
    std::cout << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}


void	Account::displayStatus( void ) const
{
    std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits;
    std::cout << ";withdrawals" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    this->_nbDeposits++;
    std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->checkAmount() << ";deposits:" << deposit;
    std::cout << ";amount:" << this->_amount + deposit << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool   Account::makeWithdrawal(int withdrawal)
{
    std::cout << " index:" << this->_accountIndex << ";p_amount" << this->checkAmount() << ";withdrawal";
    if (withdrawal > this->checkAmount())
    {
        std::cout << ";refused" << std::endl;
        return (false);
    }
    this->_nbWithdrawals++;
    std::cout << withdrawal << ";amount:" << this->_amount - withdrawal << ";nb_withdrawals" << this->_nbWithdrawals << std::endl;
    this->_amount -= withdrawal;
    Account::_totalAmount -= withdrawal;
}
