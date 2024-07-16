/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:24:11 by damendez          #+#    #+#             */
/*   Updated: 2024/07/16 17:24:11 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:

    public:
        ScavTrap();
        ScavTrap( const ScavTrap& old );
        ScavTrap &operator=( const ScavTrap& rhs );
        ~ScavTrap();

        ScavTrap( std::string name );

        void    attack( const std::string& target );
        void    guardGate();
};

#endif