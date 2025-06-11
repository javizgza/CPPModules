/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 12:13:47 by jazarago          #+#    #+#             */
/*   Updated: 2025/06/11 11:03:48 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int zombies;
    zombies = 5;
    
    Zombie *plague = zombieHorde(zombies, "Bu");
    for (int i = 0; i < zombies; i++)
    {
        plague[i].announce();
    }
    delete[] plague;
}