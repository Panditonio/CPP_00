/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:55:19 by aherbet           #+#    #+#             */
/*   Updated: 2023/05/18 18:55:24 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include <string>
#include "Contact.class.hpp"

const int   MAX_CONTACTS = 8;
const int   FIELD_WIDTH = 10;

class PhoneBook {
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void    addContact(void);
        void    showPhoneBook(void) const;
        void    searchPhoneBook(void) const;

    private:
        int     contact_idx;
        Contact _contacts[MAX_CONTACTS];
};

#endif