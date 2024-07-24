/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:24:03 by damendez          #+#    #+#             */
/*   Updated: 2024/07/24 14:46:54 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
	ClapTrap a("A");
    ScavTrap b("B");

    std::cout << "" << std::endl;
    a.attack("Deer");
    a.takeDamage(1);
    a.beRepaired(1);
    a.takeDamage(10);
    a.attack("Deer");
    a.beRepaired(1);
    a.takeDamage(10);

    std::cout << "" << std::endl;
    b.guardGate();
    b.attack("Bull");
    b.takeDamage(2);
    b.beRepaired(2);
    b.takeDamage(150);
    b.attack("Bull");
    b.beRepaired(2);
    b.guardGate();
    
    std::cout << "" << std::endl;
    return 0;
}