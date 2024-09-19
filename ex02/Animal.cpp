/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:13:02 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/19 16:10:22 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal() {
	std::cout << "Animal constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type): _type(type) {
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const & copy) {
	*this=copy;
	std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal&	AAnimal::operator=(AAnimal const & rhs) {

	this->_type = rhs.getType();
	return *this;
}

void	AAnimal::setType(std::string AAnimalType) {
	this->_type = AAnimalType;
}

std::string	AAnimal::getType() const {
	return this->_type;
}

/* void	AAnimal::makeSound() const {
	std::cout << "*UNBEARABLE AAnimal SOUND*" << std::endl;
} */