/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:41:52 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/19 16:22:11 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main() {

	AAnimal*	puppyMill[10];
	int		i;

	for (i = 0; i < 10; i++) {
		if (i < 5)
			puppyMill[i] = new Dog();
		else if (i >= 5)
			puppyMill[i] = new Cat();
	}

	for (i = 0; i < 10; i++) {
		delete puppyMill[i];
	}

	std::cout << std::endl;
	Dog medor;

	medor.getBrain()->ideas[0] = "I should eat this unwatched leftover...";
	std::cout << "Medor new idea : " << medor.getBrain()->ideas[0] << std::endl;

	Dog medorFriend = medor;
	std::cout << "medor's friend idea : " << medorFriend.getBrain()->ideas[0] << std::endl;

	std::cout << std::endl;
	//AAnimal	test;

	return 0;
}
