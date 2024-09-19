/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:39:49 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/18 11:12:40 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal {

	protected:

	std::string _type;

	public:

	WrongAnimal();
	//WrongAnimal(std::string type);
	WrongAnimal(WrongAnimal const & copy);
	virtual ~WrongAnimal();

	WrongAnimal&	operator=(WrongAnimal const & rhs);

	void		setType(std::string WrongAnimalType);
	std::string	getType() const;

	void	makeSound() const;

};

#endif