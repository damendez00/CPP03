/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:24:09 by damendez          #+#    #+#             */
/*   Updated: 2024/07/18 17:31:01 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    std::cout << "| ScavTrap | - " << this->_name << " Default constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "| ScavTrap | - " << this->_name << " Name constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "| ScavTrap | - " << this->_name << " Destructor called" << std::endl;
}

ScavTrap&   ScavTrap::operator=( const ScavTrap& rhs ) {
    std::cout << "| ScavTrap | - " << this->_name << " Copy assigment operator called" << std::endl;
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    return (*this);
}

void    ScavTrap::attack( std::string const& target ) {
    if (this->_energyPoints <= 0) {
        std::cout << "| ScavTrap | - " << this->_name << " is out of energy points!" << std::endl;
        return ;
    } else if (this->_hitPoints <= 0) {
        std::cout << "| ScavTrap | - " << this->_name << " is dead and can't do anything" << std::endl;
        return ;
    }
    std::cout << "| ScavTrap | - " << this->_name << " attacks " << target << " at range, causing " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoints--;
    std::cout << this->_name << "'s energyPoints = " << this->_energyPoints << std::endl;
}

void    ScavTrap::guardGate() {
    if (this->_hitPoints <= 0) {
        std::cout << "| ScavTrap | - " << this->_name << " is dead and can't do anything" << std::endl;
        return ;
    }
    std::cout << "| ScavTrap | - " << this->_name << " is now in Gate keeper mode." << std::endl;
}
