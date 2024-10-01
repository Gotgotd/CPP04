/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:41:52 by gdaignea          #+#    #+#             */
/*   Updated: 2024/10/01 11:39:45 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main() {

	std::cout << std::endl;
	//const AAnimal*	meta = new AAnimal();
	const AAnimal*	j = new Dog();
	const AAnimal*	i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); 
	j->makeSound();

	delete i;
	delete j;

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
