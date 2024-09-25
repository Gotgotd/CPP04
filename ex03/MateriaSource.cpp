/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:03:48 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/25 16:07:17 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		MateriaSrc[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & copy) {
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this=copy;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (MateriaSrc[i])
			delete MateriaSrc[i];
	}
}

MateriaSource const&	MateriaSource::operator=(MateriaSource const & rhs) {

	if (this != &rhs) {
		for (int i = 0; i < 4; i++) {
			if (MateriaSrc[i])
				delete MateriaSrc[i];
			MateriaSrc[i] = rhs.MateriaSrc[i]->clone();
		}
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria* m) {

	if (!m)
		return;
	for (int i = 0; i < 4; i++) {
		if (MateriaSrc[i] == NULL) {
			MateriaSrc[i] = m->clone();
			return;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type) {

	for (int i = 0; i < 4 && MateriaSrc[i]; i++) {
		if (MateriaSrc[i]->getType() == type)
			return (MateriaSrc[i]->clone());
	}
	return 0;
}