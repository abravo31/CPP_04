/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanda <amanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 19:21:08 by amanda            #+#    #+#             */
/*   Updated: 2023/04/25 12:58:37 by amanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <iomanip>
# include <string>
#include <cstdio>
#include <cstdlib>

class Animal{
    public :
    // Constructors & 
        Animal();
        Animal( const Animal& other );
        
    // Destructor
       virtual ~Animal();
    
    // Assignement Operator
        Animal& operator=( const Animal& src);
    
    // Methods
        virtual void makeSound( void ) const = 0;
    
    // Getters
        std::string getType( void ) const;
    
    protected :
        std::string _type;
};

#endif
