/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:55:47 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/19 15:04:38 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <iostream>
# include <string>

class Brain {
	
	public:
	Brain();
	Brain(Brain const & copy);
	~Brain();

	Brain&	operator=(Brain const & rhs);

	std::string	ideas[100];	
};

#endif

