/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:06:57 by jazarago          #+#    #+#             */
/*   Updated: 2025/06/11 15:24:10 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
    std::cout << BLUE << "HumanA: " << RESET << ORANGE << name << RESET << GREEN << " armed with " << RESET << weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
    std::cout << BLUE << "HumanA: " << RESET << ORANGE << name << RESET << RED << " DESTROYED" << RESET << std::endl;
}

void    HumanA::attack()
{
    std::cout << name << YELLOW << " attacks" << RESET << " with a " << weapon.getType() << std::endl;
}