/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramos-a <jramos-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:19:19 by jramos-a          #+#    #+#             */
/*   Updated: 2025/07/15 13:19:19 by jramos-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

std::string const & ICharacter::getName() const {
	static std::string name = "Default Character";
	return name;
}

void ICharacter::equip(AMateria* m) {
	if (m) {
		std::cout << "Equipping materia: " << m->getType() << std::endl;
	}
}

void ICharacter::unequip(int idx) {
	std::cout << "Unequipping materia at index: " << idx << std::endl;
}

void ICharacter::use(int idx, ICharacter& target) {
	if (_type == "Ice")
		std::cout << "* shots and icebolt at " << target.getName() << " *" << std::endl;
	else if (_type == "Cure")
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	else
		std::cout << "* uses unknown materia on " << target.getName() << " *" << std::endl; 
}

Icharacter::~ICharacter() {
	std::cout << "ICharacter destructor called" << std::endl;
}
