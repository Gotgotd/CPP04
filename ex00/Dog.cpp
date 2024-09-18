/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:34:09 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/17 17:10:01 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	setType("dog");
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog const & copy) {
	*this=copy;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

Dog&	Dog::operator=(Dog const & rhs) {
	this->_type = rhs.getType();
	return *this;
}

void	Dog::makeSound() const {
	std::cout << "WAF WAF !" << std::endl;
}