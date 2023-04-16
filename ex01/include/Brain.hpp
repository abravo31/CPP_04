/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanda <amanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 22:53:12 by amanda            #+#    #+#             */
/*   Updated: 2023/04/14 23:02:18 by amanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain{
    public :
    // Constructors
		Brain();
		Brain( const Brain& copy );

	// Deconstructors
		virtual ~Brain();

	// Overloaded Operators
		Brain&  operator=( const Brain& src );

    private :
        std::string _ideas[100];
};

#endif