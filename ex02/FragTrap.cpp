/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:22:20 by damendez          #+#    #+#             */
/*   Updated: 2024/07/16 18:22:20 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "| FragTrap | - " << this->_name << " constructed." << std::endl;
}

FragTrap::~FragTrap() {

}

void    FragTrap::highFive( void ) {
    if (this->_energyPoints <= 0) {
        std::cout << "| FragTrap | - " << this->_name << " is out of energy points!" << std::endl;
        return ;
    } else if (this->_hitPoints <= 0) {
        std::cout << "| FragTrap | - " << this->_name << " is dead :(" << std::endl;
        return ;
    }
    std::cout << "| FragTrap | - " << this->_name << " high fives everybody." << std::endl;
    this->_energyPoints--;
}