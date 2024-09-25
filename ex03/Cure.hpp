/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:49:45 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/25 15:54:43 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria {

	public: 
	Cure();
	Cure(Cure const & copy);
	~Cure();

	Cure&	operator=(Cure const & rhs);

	Cure*	clone() const;
	void	use(ICharacter& target);
};

#endif