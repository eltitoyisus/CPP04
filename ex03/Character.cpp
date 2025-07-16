/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramos-a <jramos-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 09:13:51 by jramos-a          #+#    #+#             */
/*   Updated: 2025/07/16 13:30:49 by jramos-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// Character::Character() {
// 	std::cout << "Character default constructor called" << std::endl;
// }

Character::Character(std::string cname) {
	std::cout << "Character default constructor called" << std::endl;
	_cname = cname;
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

