/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:25:16 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/25 15:55:19 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const & type): _type(type) {}

AMateria::AMateria(AMateria const & copy) {
	*this=copy;
}

AMateria::~AMateria() {}

std::string const& AMateria::getType() const
{
	return _type;
}

AMateria& AMateria::operator=(AMateria const & rhs) {

	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	return *this;
}

void	AMateria::use(ICharacter& target) {

	std::cout << "* uses " << _type << " materia on " << target.getName() << std::endl;
}