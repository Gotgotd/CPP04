/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:50:56 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/25 13:58:06 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

	public:

	AMateria*	MateriaSrc[4];
	MateriaSource();
	MateriaSource(MateriaSource const & copy);
	~MateriaSource();

	MateriaSource const &	operator=(MateriaSource const & rhs);

	void		learnMateria(AMateria*);
	AMateria*	createMateria(std::string const & type);

};

#endif