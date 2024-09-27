/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gautier <gautier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:50:56 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/27 10:35:06 by gautier          ###   ########.fr       */
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
	void 		displayLearnedMaterias() const;

};

#endif