/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanda <amanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 21:40:15 by amanda            #+#    #+#             */
/*   Updated: 2023/04/14 23:14:54 by amanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

// Constructors
Cat::Cat():Animal(){
    std::cout << "🐱Cat Default Constructor called" << std::endl;
    this->_type = "🐱Cat";
    this->_brain = new Brain();
    if (this->_brain == NULL)
	{
		perror("🐱Cat Brain allocation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}
}

Cat::Cat(const Cat& other): Animal(){
    std::cout << "🐱Cat Copy Constructor called" << std::endl;
    *this = other;
}
    
// Destructor
Cat::~Cat(){
    std::cout << "🐱Cat Destructor called" << std::endl;
}
    
// Assignement Operators
Cat& Cat::operator=(const Cat &src){
    std::cout << "🐱Cat Assignation Operator called" << std::endl;
    if (this == &src)
        return *this;
    this->_type = src._type;
    this->_brain = new Brain();
    if (this->_brain == NULL)
	{
		perror("🐱Cat Brain allocation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}
    *this->_brain = *src._brain;
    return *this;
}
    
// Methods
void Cat::makeSound( void ) const{
    std::cout << this->getType() << " says: **Meeeoow**" << std::endl;
}
        