/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:45:10 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/18 10:56:40 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {

	public:

	WrongCat();
	WrongCat(WrongCat const & copy);
	virtual ~WrongCat();	

	WrongCat&	operator=(WrongCat const & rhs);

	void	makeSound() const;
};

#endif