/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanda <amanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 19:26:27 by amanda            #+#    #+#             */
/*   Updated: 2023/04/14 22:09:01 by amanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{
    public :
    
    // Constructors
        WrongCat();
        WrongCat(const WrongCat& other);
    
    // Destructor
        ~WrongCat();
    
    // Assignement Operators
		WrongCat&   operator=(const WrongCat &src);
    
    // Methods
        void makeSound( void ) const;
        
    private :

};

#endif
