/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 12:48:14 by jazarago          #+#    #+#             */
/*   Updated: 2025/06/11 15:14:59 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon&  weapon;
    public:
        HumanA();
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void    attack();
};
