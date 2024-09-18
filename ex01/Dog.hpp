/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:31:30 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/17 17:33:22 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal {

	public:

	Dog();
	Dog(Dog const & copy);
	virtual ~Dog();	

	Dog&	operator=(Dog const & rhs);

	virtual void	makeSound() const;
};

#endif