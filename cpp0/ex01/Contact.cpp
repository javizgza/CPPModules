/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javierzaragozatejeda <javierzaragozatej    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 11:44:54 by javierzarag       #+#    #+#             */
/*   Updated: 2025/06/02 12:39:30 by javierzarag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
    // default constructor implementation
}

void Contact::set_data(const std::string& name, 
                             const std::string& lastname, 
                             const std::string& nickname, 
                             const std::string& phonenum, 
                             const std::string& secret) 
                             {
    firstName = name;
    lastName = lastname;
    nickName = nickname;
    phoneNumber = phonenum;
    darkestSecret = secret;
}

void Contact::display() const {
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Nick Name: " << nickName << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}

std::string Contact::getName() const 
{ return firstName; }
std::string Contact::getLastName() const 
{ return lastName; }
std::string Contact::getNickName() const 
{ return nickName; }
std::string Contact::getPhone() const 
{ return phoneNumber; }
std::string Contact::getSecret() const 
{ return darkestSecret; }
