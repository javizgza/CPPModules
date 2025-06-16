/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:30:00 by jazarago          #+#    #+#             */
/*   Updated: 2025/06/16 11:26:29 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    
}

Harl::~Harl()
{
    
}

void    Harl::debug(void)
{
    std::cout << BLUE << "                 DEBUG\n" << RESET;
    std::cout << YELLOW << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << RESET << std::endl;
}

void    Harl::info(void)
{
    std::cout << BLUE << "                 INFO\n" << RESET;
    std::cout << ORANGE << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << RESET << std::endl;
}

void    Harl::warning(void)
{
    std::cout << BLUE << "                 WARNING\n" << RESET;
    std::cout << GREEN << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << RESET << std::endl;
}

void    Harl::error(void)
{
    std::cout << BLUE << "                 ERROR\n" << RESET;
    std::cout << RED <<  "This is unacceptable! I want to speak to the manager now." << RESET << std::endl;
}

void    Harl::complain(std::string level)
{
    int count = 0;
    
    std::string complains[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void  (Harl::*options[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    while (count < 4)
    {
        if (level == complains[count])
        {
            (this->*options[count])();
            break;
        }
        count++;
    }
}
