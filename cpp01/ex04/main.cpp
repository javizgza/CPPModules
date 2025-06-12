/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 11:14:21 by jazarago          #+#    #+#             */
/*   Updated: 2025/06/12 13:38:53 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Library.hpp"

void    copyAndReplace(const std::string &inputFile, const std::string &outputFile, const std::string &toReplace, const std::string &replacement)
{
    if (toReplace.size() == 0 || replacement.size() == 0)
    {
        std::cout << RED << "Nothing that can be replaced or be able in replacement" << RESET << std::endl;
        return ;
    }
    std::ifstream inFile(inputFile);
    std::ofstream outFile(outputFile);
    if (outFile.fail())
    {
        std::cout << RED << "Cannot open file: " << RESET << ORANGE << outputFile << RESET << std::endl;
        return ;
    }
    std::string line;
    while (std::getline(inFile, line))
    {
        std::string replaceLine;
        size_t i = 0;
        while (i < line.size())
        {
            if (line.substr(i, toReplace.size()) == toReplace)
            {
                replaceLine = replaceLine + replacement;
                i = i + toReplace.size();
            }
            else
            {
                replaceLine = replaceLine + line[i];
                i++;
            }
        }
        outFile << replaceLine << std::endl;
    }
    inFile.close();
    outFile.close();
}

int     main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << RED << "Bad number of arguments" << RESET << std::endl;
        return (1);
    }

    std::ifstream file;
    file.open(argv[1]);
    if (file.fail())
    {
        std::cout << RED << "Cannot open file: " << RESET << ORANGE << argv[1] << RESET << std::endl;
        return (1);
    }
    if (file.peek() == EOF)
    {
        std::cout << RED << "File: " << RESET << ORANGE << argv[1] << RESET << RED << " is empty." << std::endl;
        return (1);
    }
    std::string line;
    while (std::getline(file, line))
    {
        std::cout << line << std::endl;
    }
    file.close();
    
    std::string outputFile = std::string(argv[1]) + ".copy";
    copyAndReplace(argv[1], outputFile, argv[2], argv[3]);
    return (0);
}