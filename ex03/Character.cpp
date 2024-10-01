/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:39:10 by gdaignea          #+#    #+#             */
/*   Updated: 2024/10/01 10:37:24 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

Character::Character() {
	//std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		items[i] = NULL;
}

Character::Character(std::string name): _name(name) {
	//std::cout << "Character name constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		items[i] = NULL;
}

Character::Character(Character const & copy) {
	//std::cout << "Character copy constructor called" << std::endl;
	*this=copy;
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		if (items[i] != NULL)
			delete items[i];
	}
}

std::string const& Character::getName() const
{
	return _name;
}

Character const &	Character::operator=(Character const & rhs) {
	if (this != &rhs) {
		this->_name = rhs.getName();
		for (int i = 0; i < 4; i++) {
			if (items[i] != NULL)
				delete items[i];
			if (rhs.items[i] != NULL)
				items[i] = rhs.items[i]->clone();
			else
				items[i] = NULL;
		}
	}
	return *this;
}

void	Character::equip(AMateria* m) {
	
	if (!m)
		return ;
	for (int i = 0; i < 4; i++) {
		if (items[i] == NULL) {
			items[i] = m;
			return ;
		}
		if (i == 3)
			std::cout << "This character has already 4 Materia items. Please unequip one first" << std::endl;
	}
}

void	Character::unequip(int idx) {
	if (idx < 0 || idx > 4 || items[idx] == NULL)
		return;
	items[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target) {

	if (idx < 0 || idx >= 4 || !items[idx])
		return ;
	items[idx]->use(target);
}

void	Character::displayItems() const {

	for (int i = 0; i < 4; i++) {
		if (items[i])
			std::cout << "item " << i << " : " << items[i]->getType() << std::endl;
		else
			std::cout << "item " << i << " : empty" << std::endl;
	}
}