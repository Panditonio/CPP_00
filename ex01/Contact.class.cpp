/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 21:55:38 by aherbet           #+#    #+#             */
/*   Updated: 2023/05/18 21:55:42 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void) {
    this->_firstName = "<empty>";
    this->_lastName = "<empty>";
    this->_nickname = "<empty>";
    this->_phoneNumber = "<empty>";
    this->_darkestSecret = "<empty>";
    return;
}

Contact::~Contact(void) {
    return;
}

std::string     Contact::getFirstName(void) const {
    return (this->_firstName);
}

std::string     Contact::getLastName(void) const {
    return (this->_lastName);
}

std::string     Contact::getNickname(void) const {
    return (this->_nickname);
}

std::string     Contact::getPhoneNumber(void) const {
    return (this->_phoneNumber);
}

std::string     Contact::getDarkestSecret(void) const {
    return (this->_darkestSecret);
}

void    Contact::setFirstName(std::string str) {
    this->_firstName = str;
}

void    Contact::setLastName(std::string str) {
    this->_lastName = str;
}

void    Contact::setNickname(std::string str) {
    this->_nickname = str;
}

void    Contact::setPhoneNumber(std::string str) {
    this->_phoneNumber = str;
}

void    Contact::setDarkestSecret(std::string str) {
    this->_darkestSecret = str;
}