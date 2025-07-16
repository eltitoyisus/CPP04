/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramos-a <jramos-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 09:13:51 by jramos-a          #+#    #+#             */
/*   Updated: 2025/07/16 14:52:25 by jramos-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// Character::Character() {
// 	std::cout << "Character default constructor called" << std::endl;
// }

Character::Character(std::string name) : _name(name), _count(0) {
	std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		_inventory[i] = NULL;
	}
}


Character::Character(const Character& other) : ICharacter(other) {
	std::cout << "Character copy constructor called" << std::endl;
}

Character& Character::operator=(const Character& other) {
	std::cout << "Character assingment operator called" << std::endl;
	if (this != &other) {
		_cname = other._cname;
	}
	return *this;
}

Character::~Character() {
	std::cout << "Character destructor called" << std::endl;
}

// Add these implementations after your constructor/destructor code

std::string const & Character::getName() const {
	return _name;
}

void Character::equip(AMateria* m) {
	if (!m || _count >= 4)
		return;
	
	for (int i = 0; i < 4; i++) {
		if (_inventory[i] == NULL) {
			_inventory[i] = m;
			_count++;
			return;
		}
	}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4 && _inventory[idx]) {
		_inventory[idx] = NULL;
		_count--;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4 && _inventory[idx]) {
		_inventory[idx]->use(target);
	}
}
