/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:11:40 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/17 17:16:09 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	setType("cat");
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const & copy) {
	*this=copy;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

Cat&	Cat::operator=(Cat const & rhs) {
	this->_type = rhs.getType();
	return *this;
}

void	Cat::makeSound() const {
	std::cout << "MIAOUUUU" << std::endl;
}