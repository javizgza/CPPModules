/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:25:51 by jazarago          #+#    #+#             */
/*   Updated: 2025/06/11 15:24:53 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(nullptr)
{
    std::cout << BLUE << "HumanB: " << RESET << ORANGE << name << RESET << GREEN << " armed with" << RESET << " nothing" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << BLUE << "HumanB: " << RESET << ORANGE << name << RESET << RED << " DESTROYED" << RESET << std::endl;
}

void    HumanB::attack()
{
    std::cout << name << YELLOW << " attacks" << RESET << " with a " << weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}