/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpirotti <vpirotti@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   GitHub : @Nave20                                  #+#    #+#             */
/*   28 is the new 42                                 ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "../inc/Contact.hpp"
#include "../inc/PhoneBook.hpp"

int main()
{
	std::string input;
	PhoneBook	phone_book;
	while (true)
	{
		std::cout << "ADD/SEARCH/EXIT: " << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
			return 1;
		if (input == "EXIT")
			break;
		if (input == "ADD")
			if (phone_book.addContact() == 1)
				return 1;
		if (input == "SEARCH")
		{
			if (phone_book.searchContact() == 1)
				return 1;
		}
	}
	return 0;
}
