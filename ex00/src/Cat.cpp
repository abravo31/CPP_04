/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanda <amanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 21:40:15 by amanda            #+#    #+#             */
/*   Updated: 2023/04/14 22:09:15 by amanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors
Cat::Cat():Animal(){
    std::cout << "🐱Cat Default Constructor called" << std::endl;
    this->_type = "🐱Cat";
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
    return *this;
}
    
// Methods
void Cat::makeSound( void ) const{
    std::cout << this->getType() << " says: **Meeeoow**" << std::endl;
}
        