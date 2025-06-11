/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 12:19:09 by jazarago          #+#    #+#             */
/*   Updated: 2025/06/11 10:57:02 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie  *zombiePlague;
    int i;

    i = 0;
    zombiePlague = new Zombie[N];
    while (i < N)
    {
        zombiePlague[i].nameHorde(name);
        i++;
    }
    return (zombiePlague);
}