/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:44:15 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/19 14:50:27 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain const & copy) {
	*this=copy;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

Brain&	Brain::operator=(Brain const & rhs) {
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = rhs.ideas[i];
	}
	return *this;
}