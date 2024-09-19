/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:34:09 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/19 15:31:07 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	setType("dog");
	HiThisIsBrain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog const & copy) {
	HiThisIsBrain = new Brain(*copy.HiThisIsBrain);
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog() {
	delete HiThisIsBrain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog&	Dog::operator=(Dog const & rhs) {
	if (this != &rhs) {
		delete HiThisIsBrain;
		this->HiThisIsBrain = new Brain(*rhs.HiThisIsBrain);
		this->_type = rhs.getType();
	}
	return *this;
}

void	Dog::makeSound() const {
	std::cout << "WAF WAF !" << std::endl;
}

Brain*	Dog::getBrain() const {
	return HiThisIsBrain;
}