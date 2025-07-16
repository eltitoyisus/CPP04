/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramos-a <jramos-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 22:13:07 by jramos-a          #+#    #+#             */
/*   Updated: 2025/07/15 22:13:07 by jramos-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "Cure constructed" << std::endl;
}

Cure::Cure(const Cure& other) : AMateria(other) {
	std::cout << "Cure copy constructed" << std::endl;
}

Cure& Cure::operator=(const Cure& other) {
	std::cout << "Cure assigned" << std::endl;
	if (this != &other) {
		AMateria::operator=(other);
	}
	return *this;
}

Cure::~Cure() {
	std::cout << "Cure destructor called" << std::endl;
}

AMateria* Cure::clone() const {
	return new Cure(*this);
}

void Cure::use(ICharacter& target) {
	std::cout << "Cure used on " << target.getName() << std::endl;
}
