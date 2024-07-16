/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:24:03 by damendez          #+#    #+#             */
/*   Updated: 2024/07/16 17:24:03 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap bill( "Bill" );
    ScavTrap bill2( bill );

    bill.attack( "the air" );
    bill.takeDamage( 10 );
    bill.beRepaired( 10 );
    bill.guardGate();

    return 0;
}