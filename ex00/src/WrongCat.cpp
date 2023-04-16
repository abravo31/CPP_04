/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanda <amanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 21:55:21 by amanda            #+#    #+#             */
/*   Updated: 2023/04/14 22:07:59 by amanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Constructors
WrongCat::WrongCat():WrongAnimal(){
    std::cout << "🦁WrongCat Default Constructor called" << std::endl;
    this->_type = "🦁WrongCat";
}

WrongCat::WrongCat(const WrongCat& other):WrongAnimal(){
    std::cout << "🦁WrongCat Copy Constructor called" << std::endl;
    *this = other;
}
    
// Destructor
WrongCat::~WrongCat(){
    std::cout << "🦁WrongCat Destructor called" << std::endl;
}
    
// Assignement Operators
WrongCat& WrongCat::operator=(const WrongCat &src){
    std::cout << "🦁WrongCat Assignation Operator called" << std::endl;
    if (this == &src)
        return *this;
    this->_type = src._type;
    return *this;
}
    
// Methods
void WrongCat::makeSound( void ) const{
    std::cout << this->getType() << " says: **Roooar**" << std::endl;
}