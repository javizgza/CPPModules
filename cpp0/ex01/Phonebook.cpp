/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 10:36:37 by javierzarag       #+#    #+#             */
/*   Updated: 2025/06/04 11:09:50 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() : count(0), oldest(0) {}

void PhoneBook::addContact()
{
    std::string name, lastName, nickName, phoneNumber, darkestSecret;

    std::cout << "First name: ";
    std::getline(std::cin, name);
    if (name.empty())
    {
        std::cout << "\x1B[31m\nError: First Name can't be empty\x1B[0m" << std::endl;
        return ;
    }
    std::cout << "Last Name: ";
    std::getline(std::cin, lastName);
    if (lastName.empty())
    {
        std::cout << "\x1B[31m\nError: Last Name can't be empty\x1B[0m" << std::endl;
        return ;
    }
    std::cout << "NickName: ";
    std::getline(std::cin, nickName);
    if (nickName.empty())
    {
        std::cout << "\x1B[31m\nError: NickName can't be empty\x1B[0m" << std::endl;
        return ;
    }
    std::cout << "Phone Number: ";
    std::getline(std::cin, phoneNumber);
    if (phoneNumber.empty())
    {
        std::cout << "\x1B[31m\nError: Phone Number can't be empty\x1B[0m" << std::endl;
        return ;
    }
    std::cout << "Darkest Secret: ";
    std::getline(std::cin, darkestSecret);
    if (darkestSecret.empty())
    {
        std::cout << "\x1B[31m\nError: Darkest Secret can't be empty\x1B[0m" << std::endl;
        return ;
    }
    Contact newContact;
    newContact.set_data(name, lastName, nickName, phoneNumber, darkestSecret);

    if (count < 8)
    {
        contacts[count] = newContact;
        count++;
        std::cout << "\x1B[32m\nNew Contact Added!\x1B[0m" << std::endl;
    }
    else
    {
        contacts[oldest] = newContact;
        oldest++;
        if (oldest >= 8)
            oldest = 0;
        std::cout << "\x1B[32mNew Contact Added!\x1B[0m \x1B[33m(Replaced Oldest)\x1B[0m" << std::endl;
    }
}

void PhoneBook::searchContact() const
{
    if (count == 0)
    {
        std::cout << "\nThere are no contacts yet!" << std::endl;
        return;
    }
    std::cout << " ___________________________________________ " << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;

    for (int i = 0; i < 8; i++)
    {
        if (contacts[i].getName().empty())
            continue;
        std::string index = std::to_string(i + 1);
        if (index.length() > 10)
            index = index.substr(0, 9) + ".";
        else
            index = std::string(10 - index.length(), ' ') + index;
        std::string firstName = contacts[i].getName();
        if (firstName.length() > 10)
            firstName = firstName.substr(0, 9) + ".";
        else
            firstName = std::string(10 - firstName.length(), ' ') + firstName;
        std::string lastName = contacts[i].getLastName();
        if (lastName.length() > 10)
            lastName = lastName.substr(0, 9) + ".";
        else
            lastName = std::string(10 - lastName.length(), ' ') + lastName;
        std::string nickname = contacts[i].getNickName();
        if (nickname.length() > 10)
            nickname = nickname.substr(0, 9) + ".";
        else
            nickname = std::string(10 - nickname.length(), ' ') + nickname;
        std::cout << "|" << index
                  << "|" << firstName
                  << "|" << lastName
                  << "|" << nickname
                  << "|" << std::endl;
    }
    std::cout << " ------------------------------------------- " << std::endl;

    int index;
    std::cout << "Enter contact index (1-8): ";
    std::cin >> index;

    if (std::cin.fail() || index < 1 || index > 8 || contacts[index - 1].getName().empty())
    {
        std::cin.clear();
        std::cout << "Invalid index!" << std::endl;
    }
    else
        contacts[index - 1].display();
    std::cout << std::endl;
}
