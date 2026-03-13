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

#include  <iostream>
#include  <iomanip>
#include  <cstdlib>
#include "../inc/PhoneBook.hpp"
#include "../inc/Contact.hpp"

PhoneBook::PhoneBook() : _contact_nb(0), _oldest(0)
{

}

PhoneBook::~PhoneBook()
{

}

int PhoneBook::addContact ()
{
	Contact newContact;

	if (newContact.setContact () == 1)
		return (1);
	this->_contacts[this->_oldest] = newContact;

	this->_oldest = (this->_oldest + 1) % 8;

	if (this->_contact_nb < 8)
		this->_contact_nb++;
	return (0);
}

int PhoneBook::searchContact()
{
	int i = 0;
	std::string input;
	int index;

	if (_contact_nb == 0)
	{
		std::cout<<"No contacts found"<<std::endl;
		return 0;
	}

	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First name" << "|";
	std::cout << std::setw(10) << "Last name" << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;

	while (i < _contact_nb)
	{
		_contacts[i].Summary (i + 1);
		i++;
	}

	std::cout << "Enter a valid index : ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		return 1;
	index = std::atoi(input.c_str());
	if (index <= 0 || index > _contact_nb)
	{
		std::cout<<"Invalid index"<<std::endl;
		return 0;
	}
	_contacts[index - 1].displayContact ();
	return 0;
}
