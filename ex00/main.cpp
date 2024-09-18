/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:41:52 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/18 11:06:08 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main() {

const Animal*	meta = new Animal();
const Animal*	j = new Dog();
const Animal*	i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); 
j->makeSound();
meta->makeSound();

delete meta;
delete j;
delete i;

std::cout << "------/ WRONGCAT TESTS /--------" << std::endl;

const WrongAnimal*	wrongMeta = new WrongAnimal();
const WrongAnimal*	anotherCat = new WrongCat();

std::cout << wrongMeta->getType() << " " << std::endl;
std::cout << anotherCat->getType() << " " << std::endl;
wrongMeta->makeSound(); 
anotherCat->makeSound();

delete wrongMeta;
delete anotherCat;

return 0;
}
