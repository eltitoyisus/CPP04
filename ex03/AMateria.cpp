/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramos-a <jramos-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:42:41 by jramos-a          #+#    #+#             */
/*   Updated: 2025/07/15 12:42:41 by jramos-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "AMateria default constructed." << std::endl;
	_type = "Unknown";
}

AMateria::AMateria(const AMateria& other) {
	std::cout << "AMateria copy constructed." << std::endl;
	_type = other._type;
}

AMateria& oprator=(const AMateria& other) {
	std::cout << "AMateria assigned." << std::endl;
	if (this != &other) {
		_type = other._type;
	}
	return *this;
}

AMateria::~AMateria() {
	std::cout << "AMateria of type " << _type << " destroyed." << std::endl;
}



AMateria::AMateria(std::string const & type) : _type(type) {
	std::cout << "AMateria of type " << _type << " constructed." << std::endl;
}

std::string const & AMateria::getType() const {
	return _type;
}

AMateria* AMateria::clone() const {
	std::cout << "Cloning AMateria of type " << _type << "." << std::endl;
	return new AMateria(*this);
}

void AMateria::use(ICharacter& target) {
	std::cout << "Using AMateria of type " << _type << " on " << target.getName() << "." << std::endl;
}
