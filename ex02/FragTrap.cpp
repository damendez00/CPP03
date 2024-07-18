/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:22:20 by damendez          #+#    #+#             */
/*   Updated: 2024/07/18 17:45:55 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    std::cout << "[ FragTrap ] - " << this->_name << " Default constructor called" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "[ FragTrap ] - " << this->_name << " constructed." << std::endl;
}

FragTrap::~FragTrap() {

}

FragTrap&   FragTrap::operator=( const FragTrap& rhs ) {
    std::cout << "[ FragTrap ] - " << this->_name << " Copy assigment operator called" << std::endl;
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    return (*this);
}

void    FragTrap::highFive( void ) {
    if (this->_energyPoints <= 0) {
        std::cout << "[ FragTrap ] - " << this->_name << " is out of energy points!" << std::endl;
        return ;
    } else if (this->_hitPoints <= 0) {
        std::cout << "[ FragTrap ] - " << this->_name << " is dead :(" << std::endl;
        return ;
    }
    std::cout << "[ FragTrap ] - " << this->_name << " high fives everybody." << std::endl;
}