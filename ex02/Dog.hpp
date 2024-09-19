/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:31:30 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/19 16:01:33 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public AAnimal {

	public:

	Dog();
	Dog(Dog const & copy);
	~Dog();	

	Dog&	operator=(Dog const & rhs);
	Brain*	getBrain() const;

	virtual void	makeSound() const;

	private:

	Brain*	HiThisIsBrain;
};

#endif