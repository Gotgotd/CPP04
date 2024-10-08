/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gautier <gautier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:55:56 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/26 11:58:12 by gautier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp"

Cure::Cure(): AMateria("cure") {
	//std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(Cure const & copy): AMateria("Cure") {
	//std::cout << "Cure copy constructor called" << std::endl;
	*this=copy;
}

Cure::~Cure() {
	//std::cout << "Cure destructor called" << std::endl;
}

Cure&	Cure::operator=(Cure const & rhs) {

	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	return *this;
}

Cure*	Cure::clone() const {

	return (new Cure(*this));
}

void	Cure::use(ICharacter& target) {

	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}