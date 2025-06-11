/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 12:13:12 by jazarago          #+#    #+#             */
/*   Updated: 2025/06/11 11:14:03 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie ()
{
       std::cout << "New Horde: " << name << GREEN << "Created" << RESET << std::endl;
}

void    Zombie::nameHorde(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << "Horde: " << name << ": " << RED << "Destroyed" << RESET << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << name << ": " << CYAN << "Brain Brain Brain Brainzzzz" << RESET << std::endl;
}
