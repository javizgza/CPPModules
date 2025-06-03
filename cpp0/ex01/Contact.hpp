/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javierzaragozatejeda <javierzaragozatej    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 11:45:05 by javierzarag       #+#    #+#             */
/*   Updated: 2025/06/02 12:26:26 by javierzarag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class   Contact{
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;
    public:
        Contact();
        void    set_data(const std::string& fname,
                            const std::string& lname,
                            const std::string& nname,
                            const std::string& phonen,
                            const std::string& sect);
        std::string getName() const;
        std::string getLastName() const;
        std::string getNickName() const;
        std::string getPhone() const;
        std::string getSecret() const;

        void display() const;
};

#endif
