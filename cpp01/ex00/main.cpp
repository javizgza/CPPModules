/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 10:06:26 by jazarago          #+#    #+#             */
/*   Updated: 2025/06/09 10:26:52 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombiePlague;

    zombiePlague = newZombie("Potato");
    zombiePlague->announce();
    randomChump("Bread");
    delete(zombiePlague);
    return (0);
}