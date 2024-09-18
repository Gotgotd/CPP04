/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:13:02 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/17 17:27:10 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(std::string type): _type(type) {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(Animal const & copy) {
	*this=copy;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal&	Animal::operator=(Animal const & rhs) {

	this->_type = rhs.getType();
	return *this;
}

void	Animal::setType(std::string animalType) {
	this->_type = animalType;
}

std::string	Animal::getType() const {
	return this->_type;
}

void	Animal::makeSound() const {
	std::cout << "*UNBEARABLE ANIMAL SOUND*" << std::endl;
}