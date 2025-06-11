/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 09:30:52 by jazarago          #+#    #+#             */
/*   Updated: 2025/06/11 11:49:46 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iomanip>
# include <iostream>
# include <string>
# include <new>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define CYAN "\033[36m"
#define BOLD "\033[1m"
#define BOLD_OFF "\033[22m"
#define RESET "\033[0m"

class   Zombie 
{
		
		private:
			std::string	name;
		public:
			Zombie(std::string name);
			~Zombie();
			
			void	announce (void);

};

Zombie* newZombie( std::string name );
void 	randomChump( std::string name );

#endif