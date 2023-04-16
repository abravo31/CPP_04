/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanda <amanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 19:42:18 by amanda            #+#    #+#             */
/*   Updated: 2023/04/14 22:08:43 by amanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

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
        
    private :

};

#endif