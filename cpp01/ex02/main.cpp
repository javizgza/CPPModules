/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 11:17:13 by jazarago          #+#    #+#             */
/*   Updated: 2025/06/11 12:19:55 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iomanip>
#include <iostream>

#define RED "\033[31m"
#define BLUE "\033[36m"
#define RESET "\033[0m"

int main()
{
    std::string s1;
    std::string *stringPTR;
    std::string &stringREF = s1;

    s1 = "HI THIS IS BRAIN";
    stringPTR = &s1;

    //Memory Adresses
    std::cout << RED << "Memory adress string: " << RESET << &s1 << std::endl;
    std::cout << RED << "Memory adress pointer: " << RESET << stringPTR << std::endl;
    std::cout << RED << "Memory adress reference: " << RESET << &stringREF << std::endl;

    //Values
    std::cout << BLUE << "String Value: " << RESET << s1 << std::endl;
    std::cout << BLUE << "Pointer value: " << RESET << *stringPTR << std::endl;
    std::cout << BLUE << "Reference value: " << RESET << stringREF << std::endl;

    return (0);
}