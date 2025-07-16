/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramos-a <jramos-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:21:07 by jramos-a          #+#    #+#             */
/*   Updated: 2025/07/16 09:59:08 by jramos-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

//make inventory

void learnMateria(AMateria* materia) {
	if (materia == nullptr) {
		std::cerr << "Error: Cannot learn null materia." << std::endl;
		return;
	}
	std::cout << "Learning materia: " << materia->getType() << std::endl;
	inventory.push_back(materia);
}

AMateria* createMateria(std::string const & type) {
	if (type == "ice") {
		return new Ice();
	} else if (type == "cure") {
		return new Cure();
	} else {
		std::cerr << "Error: Unknown materia type." << std::endl;
		return nullptr;
	}
}

IMateriaSource::~IMateriaSource() {
	std::cout << "IMateriaSource destructor called." << std::endl;
}

