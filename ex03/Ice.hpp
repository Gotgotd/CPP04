/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:29:33 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/25 15:54:43 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice: public AMateria {

	public: 
	Ice();
	Ice(Ice const & copy);
	~Ice();

	Ice&	operator=(Ice const & rhs);

	Ice*	clone() const;
	void	use(ICharacter& target);
};

#endif