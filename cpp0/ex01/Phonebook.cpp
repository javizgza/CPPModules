/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javierzaragozatejeda <javierzaragozatej    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 10:36:37 by javierzarag       #+#    #+#             */
/*   Updated: 2025/06/03 21:57:22 by javierzarag      ###   ########.fr       */
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
        std::cout << "Error: First Name can't be empty" << std::endl;
        return ;
    }
    std::cout << "Last Name: ";
    std::getline(std::cin, lastName);
    if (lastName.empty())
    {
        std::cout << "Error: Last Name can't be empty" << std::endl;
        return ;
    }
    std::cout << "NickName: ";
    std::getline(std::cin, nickName);
    if (nickName.empty())
    {
        std::cout << "Error: NickName can't be empty" << std::endl;
        return ;
    }
    std::cout << "Phone Number: ";
    std::getline(std::cin, phoneNumber);
    if (phoneNumber.empty())
    {
        std::cout << "Error: Phone Number can't be empty" << std::endl;
        return ;
    }
    std::cout << "Darkest Secret: ";
    std::getline(std::cin, darkestSecret);
    if (darkestSecret.empty())
    {
        std::cout << "Error: Darkest Secret can't be empty" << std::endl;
        return ;
    }
    Contact newContact;
    newContact.set_data(name, lastName, nickName, phoneNumber, darkestSecret);

    if (count < 8)
    {
        contacts[count] = newContact;
        count++;
        std::cout << "\x1B[32mNew Contact Added!\x1B[0m" << std::endl;
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
        std::cout << "\x1B[33m\nThere are no contacts yet!\x1B[0m\n" << std::endl;
        return;
    }
    std::cout << " ___________________________________________ " << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;

    char c = '0';
    int displayed = 0;
    while (++c <= '8')
    {
        int idx = c - '1';
        if (!contacts[idx].getName().empty())
        {
            auto format = [](const std::string &s) -> std::string {
                std::string out = s;
                if (s.length() > 10)
                    return s.substr(0, 9) + ".";
                while (out.length() < 10)
                    out = " " + out;
                return out;
            };

            std::cout << "|" << format(std::to_string(idx + 1))
                      << "|" << format(contacts[idx].getName())
                      << "|" << format(contacts[idx].getLastName())
                      << "|" << format(contacts[idx].getNickName())
                      << "|" << std::endl;
            displayed++;
        }
    }
    std::cout << " ------------------------------------------- " << std::endl;
    
    if (displayed == 0)
        return;
    
    int index;
    std::cout << "Enter contact index: ";
    std::cin >> index;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if (index <= 0 || index > 8 || contacts[index - 1].getName().empty())
    {
        std::cin.clear();
        std::cout << "\x1B[31mInvalid index\x1B[0m\n" << std::endl;
    }
    else
    {
        contacts[index - 1].display();
        std::cout << std::endl;
    }
}

std::string PhoneBook::truncateField(const std::string field) const {
    if (field.length() > 10)
        return field.substr(0, 9) + ".";
    return field;
}
