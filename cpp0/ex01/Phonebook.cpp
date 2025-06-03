/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javierzaragozatejeda <javierzaragozatej    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 10:36:37 by javierzarag       #+#    #+#             */
/*   Updated: 2025/06/02 18:18:51 by javierzarag      ###   ########.fr       */
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
        std::cout << "New Contact Added!" << std::endl;
    }
    else
    {
        contacts[oldest] = newContact;
        oldest++;
        if (oldest >= 8)
            oldest = 0;
        std::cout << "New Contact Added! (Replaced Oldest)" << std::endl;
    }
}

void    PhoneBook::searchContact() const
{
    int i;
    int index;
    
    i = 0;
    if (count == 0)
    {
        std::cout << "There are no contacts yet!\n" << std::endl;
        return ;
    }
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nick Name" << std::endl;
    while (i < count)
    {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << truncateField(contacts[i].getName()) << "|"
                  << std::setw(10) << truncateField(contacts[i].getLastName()) << "|"
                  << std::setw(10) << truncateField(contacts[i].getNickName()) << std::endl;
        i++;          
    }
    std::cout << "\nEnter contact index: ";
    std::cin >> index;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if (index < 0 || index >= count)
    {
        std::cin.clear();
        std::cout << "Invalid index\n" << std::endl;
    }
    else
    {
        contacts[index].display();
        std::cout << std::endl;
    }
}

std::string PhoneBook::truncateField(const std::string field) const {
    if (field.length() > 10)
        return field.substr(0, 9) + ".";
    return field;
}
