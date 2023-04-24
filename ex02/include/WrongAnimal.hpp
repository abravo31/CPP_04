/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanda <amanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 19:21:08 by amanda            #+#    #+#             */
/*   Updated: 2023/04/14 22:40:48 by amanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <iomanip>
# include <string>

class WrongAnimal{
    public :
    // Constructors & 
        WrongAnimal();
        WrongAnimal( const WrongAnimal& other );
        
    // Destructor
        virtual ~WrongAnimal();
    
    // Assignement Operator
        WrongAnimal&    operator=( const WrongAnimal& src);
    
    // Methods
        virtual void makeSound( void ) const;
    
    // Getters
        std::string getType( void ) const;
    
    protected :
        std::string _type;
};

#endif
