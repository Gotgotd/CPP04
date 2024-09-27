/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gautier <gautier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:54:05 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/27 10:53:20 by gautier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource {

	public:
	virtual 			~IMateriaSource() {}
	virtual void 		learnMateria(AMateria*) = 0;
	virtual AMateria* 	createMateria(std::string const & type) = 0;
	virtual void 		displayLearnedMaterias() const = 0;
};

#endif