/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abravo <abravo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 19:26:27 by amanda            #+#    #+#             */
/*   Updated: 2023/04/24 22:36:35 by abravo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"
#include <cstdio>
#include <cstdlib>

class Cat: public Animal{
    public :
    
    // Constructors
        Cat();
        Cat(const Cat& other);
    
    // Destructor
        ~Cat();
    
    // Assignement Operators
		Cat&    operator=(const Cat &src);
    
    // Methods
        void    makeSound( void ) const;
    
    // Getter
        Brain*  getBrain( void );
        
    private :
        Brain* _brain; 
};

#endif
