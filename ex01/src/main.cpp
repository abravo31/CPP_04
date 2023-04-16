/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanda <amanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 21:54:29 by amanda            #+#    #+#             */
/*   Updated: 2023/04/14 22:44:38 by amanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Animal.hpp"

int main()
{
    std::cout << std::endl;
    std::cout << "\033[34mConstructing Animal\033[0m" << std::endl;
    const Animal* meta = new Animal();
    
    std::cout << "\033[34mTesting\033[0m" << std::endl;
    std::cout << "Type: " << meta->getType() << " " << std::endl;
    meta->makeSound();
    
    std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
    delete meta;
    std::cout << std::endl;
    
    std::cout << "-------------------------------------------------" << std::endl;
    std::cout << std::endl;
    std::cout << "\033[34mConstructing Dog\033[0m" << std::endl;
    const Animal* j = new Dog();
    
    std::cout << "\033[34mTesting\033[0m" << std::endl;
    std::cout << "Type: " << j->getType() << " " << std::endl;
    j->makeSound();
    
    std::cout << "\033[34mDeconstructing \033[0m" << std::endl;
    delete j;
    std::cout << std::endl;
    
    std::cout << "-------------------------------------------------" << std::endl;
    std::cout << std::endl;
    std::cout << "\033[34mConstructing Cat\033[0m" << std::endl;
    const Animal* i = new Cat();
    
    std::cout << "\033[34mTesting\033[0m" << std::endl;
    std::cout << "Type: " << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    
    std::cout << "\033[34mDeconstructing \033[0m" << std::endl;
    delete i;
    std::cout << std::endl;
    
    std::cout << "-------------------------------------------------" << std::endl;
    std::cout << std::endl;
    std::cout << "\033[34mConstructing WrongAnimal\033[0m" << std::endl;
    const WrongAnimal* wrong_meta = new WrongAnimal();
    
    std::cout << "\033[34mTesting\033[0m" << std::endl;
    std::cout << "Type: " << wrong_meta->getType() << " " << std::endl;
    wrong_meta->makeSound();
    
    std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
    delete wrong_meta;
    std::cout << std::endl;
    
    std::cout << "-------------------------------------------------" << std::endl;
    std::cout << std::endl;
    std::cout << "\033[34mConstructing WrongCat\033[0m" << std::endl;
    const WrongAnimal* lion = new WrongCat();
    
    std::cout << "\033[34mTesting\033[0m" << std::endl;
    std::cout << "Type: " << lion->getType() << " " << std::endl;
    lion->makeSound(); //will output the cat sound!
    
    std::cout << "\033[34mDeconstructing \033[0m" << std::endl;
    delete lion;
    std::cout << std::endl;

    return 0;

}