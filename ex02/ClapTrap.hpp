/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:02:56 by damendez          #+#    #+#             */
/*   Updated: 2024/07/16 14:02:56 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string     _name;
        unsigned int    _hitPoints;
        unsigned int    _energyPoints;
        unsigned int    _attackDamage;

    public:
        ClapTrap();
        ClapTrap( const ClapTrap& old );
        ClapTrap &operator=( const ClapTrap& rhs );
        ~ClapTrap();
        
        ClapTrap( std::string name );

        void    attack( const std::string& target );
        void    takeDamage( unsigned int amount );
        void    beRepaired( unsigned int amount );
};

#endif