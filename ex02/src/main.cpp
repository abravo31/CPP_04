/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abravo <abravo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 21:54:29 by amanda            #+#    #+#             */
/*   Updated: 2023/04/24 22:52:13 by abravo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include <cstdio>
#include <cstdlib>

int main()
{
    std::cout << std::endl;
    std::cout << "\033[34mConstructing Animal\033[0m" << std::endl;
    std::string idea[6] = {"Oh, I have a brain", "So now i can think", "Hum...I want to eat", "And, also take a nap", "...Meoww?", "I have to pee!!!"};
    const Animal* meta[6];
    for (int i = 0; i < 6; i++){
        if (i % 2){
            meta[i] = new Cat();
            if (meta[i] == NULL){
                perror("Cat allocation failed");
				std::cerr << "Exiting process now";
				exit(1);
            }
        }
        else{
            meta[i] = new Dog();
            if (meta[i] == NULL){
                perror("Dog allocation failed");
				std::cerr << "Exiting process now";
				exit(1);
            }
        }
    }
    
    std::cout << std::endl;
    std::cout << "\033[34mTesting\033[0m" << std::endl;
    for (int i = 0; i < 6; i++){
        std::cout << std::endl;
        std::cout << "Type: " << meta[i]->getType() << " " << std::endl;
        meta[i]->makeSound();
        std::cout << std::endl;
    }

    std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
    for (int i = 0; i < 6; i++){
        delete(meta[i]);
    }
        
        
    //THIS PART IS FOR TESTING DEEP COPY ↓

	std::cout << std::endl;
	std::cout << "--- showing that the copy constructor creates a deep copy ---" << std::endl;
	std::cout << std::endl;
    
    std::cout << "\033[34mConstructing\033[0m" << std::endl;
	Cat *lou = new Cat();
    if (lou == NULL)
	{
		perror("Allocation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}
    
    for (int i = 0; i < 6; i++)
    {
        lou->getBrain()->setIdeas(idea[i]);
        std::cout << "The " << lou->getType() << " is thinking about..." << lou->getBrain()->getIdeas(i) << std::endl;
    }
    
    std::cout << std::endl;

    Cat *loulou = new Cat( *lou );
    if (loulou == NULL)
	{
		perror("Allocation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}
    
    for (int i = 0; i < 6; i++)
    {
        lou->getBrain()->setIdeas(idea[i]);
        std::cout << "The " << loulou->getType() << " is thinking about..." << loulou->getBrain()->getIdeas(i) << std::endl;
    }
    
    std::cout << std::endl;
    std::cout << "\033[34mDeconstructing \033[0m" << std::endl;
    delete lou;
    std::cout << std::endl;
    std::cout << "\033[34mDeconstructing copy\033[0m" << std::endl;
    delete loulou;
    std::cout << std::endl;
    
    return 0;

}