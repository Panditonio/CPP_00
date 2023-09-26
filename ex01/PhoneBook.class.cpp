/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 21:55:53 by aherbet           #+#    #+#             */
/*   Updated: 2023/05/18 21:56:06 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) {
    this->contact_idx = 0;
    return;
}

PhoneBook::~PhoneBook(void) {
    return;
}

void    PhoneBook::addContact(void) {
    std::string tmp1, tmp2, tmp3, tmp4, tmp5;

    if (contact_idx < MAX_CONTACTS) {
        while (tmp1.empty() && !std::cin.eof()) {
            std::cout << "Enter First Name : ";
            std::getline(std::cin, tmp1);
            this->_contacts[contact_idx].setFirstName(tmp1);
        }
        while (tmp2.empty() && !std::cin.eof()) {
            std::cout << "Enter Last Name : ";
            std::getline(std::cin, tmp2);
            this->_contacts[contact_idx].setLastName(tmp2);
        }
        while (tmp3.empty() && !std::cin.eof()) {
            std::cout << "Enter Nickname : ";
            std::getline(std::cin, tmp3);
            this->_contacts[contact_idx].setNickname(tmp3);
        }
        while (tmp4.empty() && !std::cin.eof()) {
            std::cout << "Enter Phone Number : ";
            std::getline(std::cin, tmp4);
            this->_contacts[contact_idx].setPhoneNumber(tmp4);
        }
        while (tmp5.empty() && !std::cin.eof()) {
            std::cout << "Enter Darkest Secret : ";
            std::getline(std::cin, tmp5);
            this->_contacts[contact_idx].setDarkestSecret(tmp5);
        }
        if (!std::cin.eof())
            std::cout << "_-_Contact Saved_-_" << std::endl;
    }
    std::cout << std::endl;
    this->contact_idx++;
    if (this->contact_idx == MAX_CONTACTS)
        this->contact_idx = 0;
}

static std::string  truncate(std::string str) {
    str.resize(FIELD_WIDTH -1);
    str.resize(FIELD_WIDTH, '.');
    return (str);
}

void    PhoneBook::showPhoneBook(void) const {
    std::string first, last, nick;

    std::cout << "|" << std::setw(FIELD_WIDTH) << "Index" << "|" ;
    std::cout << std::setw(FIELD_WIDTH) << "First Name" << "|" ;
    std::cout << std::setw(FIELD_WIDTH) << "Last Name" << "|" ;
    std::cout << std::setw(FIELD_WIDTH) << "Nickname" << "|" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    for (int i = 0; i < MAX_CONTACTS; i++) {
        first = this->_contacts[i].getFirstName();
        last = this->_contacts[i].getLastName();
        nick = this->_contacts[i].getNickname();

        std::cout << "|" << std::setw(FIELD_WIDTH) << i +1;
        first = (first.length() > FIELD_WIDTH) ? truncate(first) : first;
        std::cout << "|" << std::setw(FIELD_WIDTH) << first;

        last = (last.length() > FIELD_WIDTH) ? truncate(last) : last;
        std::cout << "|" << std::setw(FIELD_WIDTH) << last;

        nick = (nick.length() > FIELD_WIDTH) ? truncate(nick) : nick;
        std::cout << "|" << std::setw(FIELD_WIDTH) << nick;
        std::cout << "|" << std::endl;
    }
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << std::endl;
}

void    PhoneBook::searchPhoneBook(void) const {
    int         index = 0;
    std::string tmp;

    showPhoneBook();
    while ((index < 1 || index > MAX_CONTACTS)) {
        std::cout << "Please enter a contact index : ";
        std::getline(std::cin, tmp);
        index = atoi(tmp.c_str());
        std::cout << std::endl;
        if (std::cin.eof())
            break;
        if ((index < 1 || index > MAX_CONTACTS)) {
            std::cin.clear();
            std::cout << "Invalid index. Please choose an index between 1 and 8." << std::endl;
            std::cout << std::endl;
        }
    }
    if (!std::cin.eof()) {
        std::cout << "First Name:\t" << this->_contacts[index -1].getFirstName() << std::endl;
        std::cout << "Last Name:\t" << this->_contacts[index -1].getLastName() << std::endl;
        std::cout << "Nickname:\t" << this->_contacts[index -1].getNickname() << std::endl;
        std::cout << "Phone Number:\t" << this->_contacts[index -1].getPhoneNumber() << std::endl;
        std::cout << "Darkest Secret: " << this->_contacts[index -1].getDarkestSecret() << std::endl;
        std::cout << std::endl;
    }
}