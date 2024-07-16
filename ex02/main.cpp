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

#include "FragTrap.hpp"

int main( void )
{
    FragTrap frgy( "Froggy Man" );
    FragTrap frgy2( frgy );

    frgy.attack( "the air" );
    frgy.takeDamage( 10 );
    frgy.beRepaired( 10 );
    frgy.highFive();

    return 0;
}