/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abravo <abravo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 22:53:12 by amanda            #+#    #+#             */
/*   Updated: 2023/04/24 22:36:31 by abravo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>
#include <cstdio>
#include <cstdlib>

class Brain{
    public :
    // Constructors
		Brain();
		Brain( const Brain& copy );

	// Deconstructors
		virtual ~Brain();

	// Overloaded Operators
		Brain&  operator=( const Brain& src );
	
	//Getter & Setter
		std::string	getIdeas( int index );
		void setIdeas( const std::string& idea );

    private :
        std::string _ideas[100];
		int _index;
};

#endif