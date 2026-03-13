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

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
class Contact
{
	public:
		Contact();
		~Contact();

		int setContact ();
		void displayContact ();
		void Summary (int index);
		void setFirstName(std::string firstname);
		void setName(std::string name);
		void setNickname(std::string nickname);
		void setPhoneNumber(std::string phoneNumber);
		void setDarkestSecret(std::string darkestSecret);

		std::string getFirstName();
		std::string getName();
		std::string getNickname();
		std::string getPhoneNumber();
		std::string getDarkestSecret();

	private:
		std::string _firstName;
		std::string _name;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;
};

#endif