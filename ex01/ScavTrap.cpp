/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:24:09 by damendez          #+#    #+#             */
/*   Updated: 2024/07/16 17:24:09 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "< ScavTrap > - " << this->_name << " constructed." << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "< ScavTrap > - " << this->_name << " destroyed." << std::endl;
}

void    ScavTrap::attack( std::string const& target ) {
    if (this->_energyPoints <= 0) {
        std::cout << "< ScavTrap > - " << this->_name << " is out of energy points!" << std::endl;
        return ;
    } else if (this->_hitPoints <= 0) {
        std::cout << "< ScavTrap > - " << this->_name << " is dead and can't take more damage" << std::endl;
        return ;
    }
    std::cout << "< ScavTrap > - " << this->_name << " attacks " << target << " at range, causing " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoints--;
}

void    ScavTrap::guardGate() {
    std::cout << "< ScavTrap > - " << this->_name << " is now in Gate keeper mode." << std::endl;
}
