/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abravo <abravo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:29:21 by abravo            #+#    #+#             */
/*   Updated: 2023/04/24 22:41:26 by abravo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
 // Constructors
Brain::Brain(): _index(0){
    std::cout << "[ 🧠Brain ] Default Constructor called" << std::endl;
    for (int i = 0; i < 100; i++){
        this->_ideas[i] = "";
    }
}

Brain::Brain( const Brain& copy ){
    std::cout << "[ 🧠Brain ] Copy Constructor called" << std::endl;
    *this = copy;
}

Brain::~Brain(){
    std::cout << "[ 🧠Brain ] Destructor called" << std::endl;
}

// Assignement Operators
Brain&  Brain::operator=( const Brain& src ){
    std::cout << "[ 🧠Brain ] Assignation Operator called" << std::endl;
    if (this == &src)
        return *this;
    for (int i = 0; i < 100; i++)
    {
        if (src._ideas[i].length() > 0)
            this->_ideas[i] = src._ideas[i];
    }
    return *this;
}
	
//Getter & Setter
std::string	Brain::getIdeas( int index ){
    if (index < 100)
        return this->_ideas[index];
    return NULL;
}

void Brain::setIdeas( const std::string& idea )
{
    if (_index > 99)
        _index = 0;
    this->_ideas[_index] = idea;
    _index++;
}