/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:25:30 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/25 15:55:04 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria {

	protected:

		std::string _type;

	public: 

	AMateria();
	AMateria(std::string const & type);
	AMateria(AMateria const & copy);
	virtual ~AMateria();

	AMateria&			operator=(AMateria const & rhs);
	std::string const &	getType() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif