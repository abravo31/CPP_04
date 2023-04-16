/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanda <amanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 19:26:27 by amanda            #+#    #+#             */
/*   Updated: 2023/04/14 23:06:25 by amanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

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
        
    private :
        Brain* _brain; 
};

#endif
