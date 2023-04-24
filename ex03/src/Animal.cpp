/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanda <amanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 21:28:29 by amanda            #+#    #+#             */
/*   Updated: 2023/04/14 22:08:14 by amanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructors 
Animal::Animal():_type("All"){
    std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal( const Animal& other ){
    std::cout << "Animal Copy Constructor called" << std::endl;
    *this = other;
}
        
// Destructor
Animal::~Animal(){
    std::cout << "Animal Destructor called" << std::endl;
}
    
// Assignement Operator
Animal  &Animal::operator=( const Animal& src ){
    std::cout << "Animal Assignation operator called" << std::endl;
    if (this == &src)
        return *this;
    this->_type = src._type;
    return *this;
}
    
// Methods
void Animal::makeSound( void ) const{
    std::cout << "This animal makes a lot of sounds." << std::endl;
}
    
// Getters
std::string Animal::getType( void ) const{
    return _type;
}