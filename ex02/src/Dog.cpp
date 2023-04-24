/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abravo <abravo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 21:51:50 by amanda            #+#    #+#             */
/*   Updated: 2023/04/24 22:25:07 by abravo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

// Constructors
Dog::Dog():Animal(){
    std::cout << "🐶Dog Default Constructor called" << std::endl;
    this->_type = "🐶Dog";
    this->_brain = new Brain();
    if (this->_brain == NULL)
	{
		perror("🐶Dog Brain allocation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}
}

Dog::Dog(const Dog& other): Animal(){
    std::cout << "🐶Dog Copy Constructor called" << std::endl;
    *this = other;
}
    
// Destructor
Dog::~Dog(){
    std::cout << "🐶Dog Destructor called" << std::endl;
}
    
// Assignement Operators
Dog& Dog::operator=(const Dog &src){
    std::cout << "🐶Dog Assignation Operator called" << std::endl;
    if (this == &src)
        return *this;
    this->_type = src._type;
    this->_brain = new Brain;
    if (this->_brain == NULL)
	{
		perror("🐶Dog Brain allocation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}
    *this->_brain = *src._brain;
    return *this;
}
    
// Methods
void Dog::makeSound( void ) const{
    std::cout << this->getType() << " says: **Woof**" << std::endl;
}

// Getter
Brain*  Dog::getBrain( void ){
    return this->_brain;
}