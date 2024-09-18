/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:46:30 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/18 11:07:23 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	setType("WrongCat");
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & copy) {
	*this=copy;
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(WrongCat const & rhs) {
	this->_type = rhs.getType();
	return *this;
}

void	WrongCat::makeSound() const {
	std::cout << "GROOAR ? ahem no, OUAF ? still not. Shit, I can't recall what's the good one..." << std::endl;
}