/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:54:14 by aherbet           #+#    #+#             */
/*   Updated: 2023/05/18 18:54:31 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include <string>
#include <iostream>

class Contact {
    public:
        Contact(void);
        ~Contact(void);
        void            setFirstName(std::string);
        void            setLastName(std::string);
        void            setNickname(std::string);
        void            setPhoneNumber(std::string);
        void            setDarkestSecret(std::string);
        std::string     getFirstName(void) const;
        std::string     getLastName(void) const;
        std::string     getNickname(void) const;
        std::string     getPhoneNumber(void) const;
        std::string     getDarkestSecret(void) const;

    private:
        std::string     _firstName;
        std::string     _lastName;
        std::string     _nickname;
        std::string     _phoneNumber;
        std::string     _darkestSecret;
};

#endif