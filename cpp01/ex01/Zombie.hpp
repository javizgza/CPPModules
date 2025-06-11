/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 12:13:49 by jazarago          #+#    #+#             */
/*   Updated: 2025/06/11 11:07:18 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIES_HPP
# define ZOMBIES_HPP  

# include <string>
# include <iomanip>
# include <new>
# include <iostream>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define CYAN "\033[36m"
#define BOLD "\033[1m"
#define BOLD_OFF "\033[22m"
#define RESET "\033[0m"

class Zombie
{
        private:
              std::string name;
        public:
            Zombie();
            Zombie(std::string name);
            ~Zombie();
        void    nameHorde(std::string name);
        void    announce(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif