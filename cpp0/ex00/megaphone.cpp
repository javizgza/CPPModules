/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javierzaragozatejeda <javierzaragozatej    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 18:07:35 by javierzarag       #+#    #+#             */
/*   Updated: 2025/06/03 18:27:12 by javierzarag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    int i;
    int j = 1;

    if (argc <= 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    if (argc > 1)
    {
        while (j < argc) 
        {
            i = 0;
            while (argv[j][i] != '\0')
                std::cout << (char)toupper(argv[j][i++]);
            j++;
            if (j < argc)
                std::cout << " ";
        }
    }
    std::cout << std::endl;
    return (0);
}
