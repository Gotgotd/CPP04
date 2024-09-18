/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:11:56 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/17 17:28:56 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal {

	public:

	Cat();
	Cat(Cat const & copy);
	virtual ~Cat();	

	Cat&	operator=(Cat const & rhs);

	virtual void	makeSound() const;
};

#endif