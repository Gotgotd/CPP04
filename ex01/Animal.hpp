/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:42:15 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/19 15:46:57 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {

	protected:

	std::string _type;

	public:

	Animal();
	Animal(std::string type);
	Animal(Animal const & copy);
	virtual ~Animal();

	Animal&	operator=(Animal const & rhs);

	void		setType(std::string animalType);
	std::string	getType() const;

	virtual void	makeSound() const;

};

#endif