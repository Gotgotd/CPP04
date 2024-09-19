/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:11:56 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/19 16:01:33 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public AAnimal {

	public:

	Cat();
	Cat(Cat const & copy);
	~Cat();	

	Cat&	operator=(Cat const & rhs);

	virtual void	makeSound() const;
	Brain*			getBrain() const;

	private:

	Brain*	HiThisIsBrain;
};

#endif