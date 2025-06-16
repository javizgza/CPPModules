/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:30:03 by jazarago          #+#    #+#             */
/*   Updated: 2025/06/16 11:15:59 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl    pointer;
    
    pointer.complain("DEBUG");
    pointer.complain("INFO");
    pointer.complain("WARNING");
    pointer.complain("ERROR");

    return (0);
}
