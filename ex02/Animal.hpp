/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:42:15 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/19 16:00:25 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal {

	protected:

	std::string _type;

	public:

	AAnimal();
	AAnimal(std::string type);
	AAnimal(AAnimal const & copy);
	virtual ~AAnimal();

	AAnimal&	operator=(AAnimal const & rhs);

	void		setType(std::string AAnimalType);
	std::string	getType() const;

	virtual void	makeSound() const = 0;

};

#endif