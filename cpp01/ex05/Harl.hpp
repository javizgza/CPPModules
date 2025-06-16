/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:29:57 by jazarago          #+#    #+#             */
/*   Updated: 2025/06/16 10:42:40 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>
# include <iomanip>

#define RED "\033[31m"
#define BLUE "\033[36m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define ORANGE "\033[38;5;214m"
#define RESET "\033[0m"

class   Harl
{
        private:
            void    debug(void);
            void    info(void);
            void    warning(void);
            void    error(void);
        public:
            Harl();
            ~Harl();
            void    complain(std::string level);
};

#endif