/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:15:03 by damendez          #+#    #+#             */
/*   Updated: 2024/07/18 17:17:12 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("A");
    ClapTrap b( a );
    ClapTrap c("C");
    c = a;
    
    std::cout << "" << std::endl;
    a.attack("Deer");
    a.takeDamage(1);
    a.beRepaired(1);

    std::cout << "" << std::endl;
    b.attack("Bull");
    b.takeDamage(2);
    b.beRepaired(2);
    
    std::cout << "" << std::endl;
    c.attack("Cow");
    c.takeDamage(3);
    c.beRepaired(3);

    std::cout << "" << std::endl;
    return 0;
}