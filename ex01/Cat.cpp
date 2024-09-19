/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:11:40 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/19 15:26:25 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	setType("cat");
	HiThisIsBrain = new Brain();
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const & copy) {
	*this=copy;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat() {
	delete HiThisIsBrain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat&	Cat::operator=(Cat const & rhs) {
	if (this != &rhs) {
		delete HiThisIsBrain;
		this->HiThisIsBrain = new Brain(*rhs.HiThisIsBrain);
		this->_type = rhs.getType();
	}
	return *this;
}

void	Cat::makeSound() const {
	std::cout << "MIAOUUUU" << std::endl;
}

Brain*	Cat::getBrain() const {
	return HiThisIsBrain;
}