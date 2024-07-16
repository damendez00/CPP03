/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:15:03 by damendez          #+#    #+#             */
/*   Updated: 2024/07/16 14:15:03 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("A");
	ClapTrap b("B");
	ClapTrap c ( a );
	ClapTrap d ("D");

	std::cout << "[ TAKE DAMAGE TEST ]" << std::endl;
	d.takeDamage(0);
	c.takeDamage(8);
	c.takeDamage(6);
	c.takeDamage(2);
	c.takeDamage(5);
	a.takeDamage(3);
	b = c;
	b.takeDamage(1);
	b.takeDamage(-5);

    std::cout << "[ ATTACK TEST ]" << std::endl;	
	d.attack("A");
	d.attack("A");
	d.attack("A");
	d.attack("A");
	d.attack("A");
	d.attack("A");
	d.attack("A");
	d.attack("A");
	d.attack("A");
	d.attack("A");
	d.attack("A");
	d.attack("A");

	std::cout << "[ BE REPAIRED TEST ]" << std::endl;
	d.beRepaired(10);
	a.beRepaired(5);
	a.beRepaired(-5);
}