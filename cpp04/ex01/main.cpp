/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:49:09 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/27 14:39:46 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
	//check polymorphism
	const Animal* j = new Dog();
	const Animal* k = new Cat();
	delete j;//should not create a leak
	delete k;
	
	//check more tests
	Animal * animalFarm[10];
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

	//check deep copy
	Cat cat1;
	cat1.getBrain()->setIdea("I am a cat"); 

	Cat cat2 = cat1;
	cat1.getBrain()->setIdea("I am a cat too");
	
	std::cout << cat1.getBrain()->getIdea(0) << std::endl;
	std::cout << cat2.getBrain()->getIdea(0) << std::endl;
	std::cout << cat1.getBrain()->getIdeas() << std::endl;
	std::cout << cat2.getBrain()->getIdeas() << std::endl;
	if (cat1.getBrain()->getIdea(0) != cat2.getBrain()->getIdea(0)) {
        std::cout << "Deep copy confirmed.\n";
    } else {
        std::cout << "Deep copy not confirmed.\n";
    }
	return 0;
}