/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhonebook.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:55:01 by aherbet           #+#    #+#             */
/*   Updated: 2023/05/18 18:55:09 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include <cstdlib>
#include <iostream>
#include <string>

static void     intro(void) {
    std::cout << "Welcome to My Awesome Phonebook !" << std::endl;
    std::cout << "Please select one of the following commands : " << std::endl;
    std::cout << "ADD, SEARCH or EXIT" <<std::endl;
    std::cout << std::endl;
}

int     main(void) {
    PhoneBook   phonebook;
    std::string input;

    intro();
    while(42) {
        while (!std::cin.eof()) {
            std::cout << "Please enter a command : ";
            std::cout << std::endl;
            std::getline(std::cin, input, '\n');
            if (input.compare("ADD") == 0)
                phonebook.addContact();
            else if (input.compare("SEARCH") == 0) {
                std::cout << std::endl;
                phonebook.searchPhoneBook();
            }
            else if (input.empty() == true)
                continue;
            else if (input.compare("EXIT") == 0) {
                std::cout << "You have chosen to exit. ";
                std::cout << "All data will be lost !" << std::endl;
                break;
            }
            else {
                std::cout << "This command does not exist.";
                std::cout << "Please use ADD, SEARCH or EXIT." << std::endl;
            }
        }
        return (EXIT_FAILURE);
    }
    std::cout << "So long... and thanks for all the fish !";
    return (0);
}