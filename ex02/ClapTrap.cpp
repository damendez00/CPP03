/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:26:49 by damendez          #+#    #+#             */
/*   Updated: 2024/07/18 17:35:14 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Undefined"), _hitPoints(10), _energyPoints(10), _attackDamage(0){
    std::cout << "< ClapTrap > - " << this->_name << " Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name.empty() ? "Undefined" : name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
    std::cout << "< ClapTrap > - " << this->_name << " Name constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "< ClapTrap > - " << this->_name << " Destructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& old ) {
    std::cout << "< ClapTrap > - Copy constructor called" << std::endl;
    *this = old;
}

ClapTrap&   ClapTrap::operator=( const ClapTrap& rhs ) {
    std::cout << "< ClapTrap > - " << this->_name << " Copy assigment operator called" << std::endl;
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    return (*this);
}

void    ClapTrap::takeDamage( unsigned int amount ) {
    if ((int)amount < 0) {
        std::cout << "Amount must be positive" << std::endl;
		return ;
    } else if ((int)this->_hitPoints <= 0) {
        std::cout << "< ClapTrap > - " << this->_name << " is dead and can't do anything" << std::endl;
        return ;
    }
    std::cout << "< ClapTrap > - " << this->_name << " takes " << amount << " points of damage" << std::endl;
    this->_hitPoints -= amount;
    std::cout << this->_name << "'s hitPoints = " << this->_hitPoints << std::endl;
}

void    ClapTrap::attack( const std::string& target ) {
    if ((int)this->_energyPoints <= 0) {
        std::cout << "< ClapTrap > - " << this->_name << " is out of energy points!" << std::endl;
        return ;
    } else if ((int)this->_hitPoints <= 0) {
        std::cout << "< ClapTrap > - " << this->_name << " is dead and can't do anything" << std::endl;
        return ;
    }
    std::cout << "< ClapTrap > - " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoints--;
    std::cout << this->_name << "'s energyPoints = " << this->_energyPoints << std::endl;

}

void    ClapTrap::beRepaired( unsigned int amount ) {
    if ((int)amount < 0) {
        std::cout << "Amount must be positive" << std::endl;
		return ;
    } else if ((int)this->_energyPoints <= 0) {
        std::cout << "< ClapTrap > - " << this->_name << " is out of energy points!" << std::endl;
        return ;
    } else if ((int)this->_hitPoints <= 0) {
        std::cout << "< ClapTrap > - " << this->_name << " is dead and can't do anything" << std::endl;
        return ;
    }
    std::cout << "< ClapTrap > - " << this->_name << " repairs itself " << amount << " amount of hit points" << std::endl;
    this->_energyPoints--;
    this->_hitPoints += amount;
    std::cout << this->_name << "'s energyPoints = " << this->_energyPoints << std::endl;
    std::cout << this->_name << "'s hitPoints = " << this->_hitPoints << std::endl;
}