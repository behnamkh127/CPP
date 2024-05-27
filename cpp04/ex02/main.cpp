/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:49:09 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/27 13:45:57 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
	const Animal* meta = new Animal();
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// delete j;//should not create a leak
// delete i;
	Animal** animalFarm = new Animal*[10];
	for(int i = 0; i < 10; i++){
		if(i < 5){
			animalFarm[i] = new Cat();
			animalFarm[i]->makeSound();
			Cat *cat = dynamic_cast<Cat *>(animalFarm[i]);
			cat->getBrain()->setIdea(cat->getType());
			std::cout << cat->getBrain()->getIdea(i) << std::endl;
		}
		else{
			animalFarm[i] = new Dog();
			animalFarm[i]->makeSound();
			Dog *dog = dynamic_cast<Dog *>(animalFarm[i]);
			dog->getBrain()->setIdea(dog->getType());
			std::cout << B << dog->getBrain()->getIdea(i) << std::endl;
		}
	}
	for(int i = 0; i < 10; i++){
		delete animalFarm[i];
	}
	delete[] animalFarm;
return 0;
}