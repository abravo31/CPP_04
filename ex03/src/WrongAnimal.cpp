/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanda <amanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 21:37:52 by amanda            #+#    #+#             */
/*   Updated: 2023/04/14 22:45:15 by amanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Constructors 
WrongAnimal::WrongAnimal():_type("Wrong"){
    std::cout << "WrongAnimal Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& other ){
    std::cout << "WrongAnimal Copy Constructor called" << std::endl;
    *this = other;
}
        
// Destructor
WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal Destructor called" << std::endl;
}
    
// Assignement Operator
WrongAnimal  &WrongAnimal::operator=( const WrongAnimal& src ){
    std::cout << "WrongAnimal Assignation operator called" << std::endl;
    if (this == &src)
        return *this;
    this->_type = src._type;
    return *this;
}
    
// Methods
void WrongAnimal::makeSound( void ) const{
    std::cout << "This animal doesn't make any sound." << std::endl;
}
    
// Getters
std::string WrongAnimal::getType( void ) const{
    return _type;
}