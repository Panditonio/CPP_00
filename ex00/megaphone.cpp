/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:48:50 by aherbet           #+#    #+#             */
/*   Updated: 2023/05/17 19:48:58 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <cstring>
#include <iostream>

void    megaphone(int argc, char **argv)
{
    for (int i = 1; i < argc; i++)
    {
        for (size_t j = 0; j < strlen(argv[i]); j++)
            std::cout << (char)toupper(argv[i][j]);
//        if (argv[i + 1] != NULL)
//            std::cout << " ";
    }
    std::cout << std::endl;
}

int     main(int argc, char **argv)
{
    if (argc > 1)
        megaphone(argc, argv);
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}