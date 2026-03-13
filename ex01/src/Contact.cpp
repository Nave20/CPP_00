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
#include  <iomanip>

Contact::Contact()
{

}

Contact::~Contact()
{

}

int Contact::setContact ()
{
	std::string input;

	std::cout << "FirstName: ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		return 1;
	while (input.empty() == true)
	{
		std::cout << "Error, field can't be empty !" << std::endl;
		std::cout << "FirstName: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return 1;
	}
	this->setFirstName(input);

	std::cout << "Name: ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		return 1;
	while (input.empty() == true)
	{
		std::cout << "Error, field can't be empty !" << std::endl;
		std::cout << "Name: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return 1;
	}
	this->setName(input);

	std::cout << "Nickname: ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		return 1;
	while (input.empty() == true)
	{
		std::cout << "Error, field can't be empty !" << std::endl;
		std::cout << "Nickname: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return 1;
	}
	this->setNickname(input);

	std::cout << "PhoneNumber: ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		return 1;
	while (input.empty() == true)
	{
		std::cout << "Error, field can't be empty !" << std::endl;
		std::cout << "PhoneNumber: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return 1;
	}
	this->setPhoneNumber(input);

	std::cout << "DarkestSecret: ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		return 1;
	while (input.empty() == true)
	{
		std::cout << "Error, field can't be empty !" << std::endl;
		std::cout << "DarkestSecret: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return 1;
	}
	this->setDarkestSecret(input);
	return 0;
}

std::string truncate(std::string input)
{
	if (input.length() > 10)
		return input.substr(0, 9) + ".";
	return input;
}

void Contact::Summary(int index)
{
	std::cout << std::setw(10) << index << "|";
	std::cout << std::setw(10) << truncate(this->getFirstName()) << "|";
	std::cout << std::setw(10) << truncate(this->getName()) << "|";
	std::cout << std::setw(10) << truncate(this->getNickname()) << std::endl;
}

void Contact::displayContact ()
{
	std::cout << "FirstName: " << getFirstName() << std::endl;
	std::cout << "Name: " << getName() << std::endl;
	std::cout << "Nickname: " << getNickname() << std::endl;
	std::cout << "PhoneNumber: " << getPhoneNumber() << std::endl;
	std::cout << "DarkestSecret: " << getDarkestSecret() << std::endl;
}

void Contact::setName(std::string value) {_name = value; }
void Contact::setFirstName(std::string value) {_firstName = value; }
void Contact::setNickname(std::string value) {_nickname = value; }
void Contact::setPhoneNumber(std::string value) {_phoneNumber = value; }
void Contact::setDarkestSecret(std::string value) {_darkestSecret = value; }

std::string Contact::getName() {return _name;}
std::string Contact::getFirstName() {return _firstName;}
std::string Contact::getNickname() {return _nickname;}
std::string Contact::getPhoneNumber() {return _phoneNumber;}
std::string Contact::getDarkestSecret() {return _darkestSecret;}
