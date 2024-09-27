/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gautier <gautier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:29:14 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/26 11:58:19 by gautier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"

Ice::Ice(): AMateria("ice") {
	//std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(Ice const & copy): AMateria("ice") {
	//std::cout << "Ice copy constructor called" << std::endl;
	*this=copy;
}

Ice::~Ice() {
	//std::cout << "Ice destructor called" << std::endl;
}

Ice&	Ice::operator=(Ice const & rhs) {

	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	return *this;
}

Ice*	Ice::clone() const {

	return (new Ice(*this));
}

void	Ice::use(ICharacter& target) {

	std::cout << "* shoots an ice bolt at " << target.getName() << " *"<< std::endl;
}