/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abravo <abravo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 19:42:18 by amanda            #+#    #+#             */
/*   Updated: 2023/04/24 22:36:40 by abravo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"
#include <cstdio>
#include <cstdlib>

class Dog: public Animal{
    public :
    
    // Constructors
        Dog();
        Dog(const Dog& other);
    
    // Destructor
        ~Dog();
    
    // Assignement Operators
		Dog&    operator=(const Dog &src);
    
    // Methods
        void    makeSound( void ) const;

    // Getter
        Brain*  getBrain( void );
        
    private :
        Brain* _brain;
};

#endif