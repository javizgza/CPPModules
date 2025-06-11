/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 09:52:39 by jazarago          #+#    #+#             */
/*   Updated: 2025/06/09 11:51:56 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string zombieName)
{
    this->name = zombieName;

    std::cout << "New Zombie named \x1b[34m"<< name << "\x1b[0m: " << "\x1b[32mCreated\x1b[0m." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie named \x1b[34m" << name << "\x1b[0m: " << "\x1b[31mDestroyed.\x1b[0m" << std::endl;
}

void    Zombie::announce()
{
    std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}