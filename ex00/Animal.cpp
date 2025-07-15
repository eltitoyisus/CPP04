/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramos-a <jramos-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 15:51:42 by jramos-a          #+#    #+#             */
/*   Updated: 2025/07/14 15:51:42 by jramos-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	_type = "random animal";
}

Animal::Animal(const Animal& other) {
	*this = other;
}

Animal& Animal::operator=(const Animal& other) {
	if (this != &other) {
		_type = other._type;
	}
	return *this;
}

Animal::~Animal() {}

std::string Animal::getType() const {
	return _type;
}

void Animal::makeSound() const {
	std::cout << "generic animal noise" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Woof!" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}

Dog::Dog() {
	_type = "Dog";
}

Cat::Cat() {
	_type = "Cat";
}

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	*this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	if (this != &other)
		_type = other._type;
	return *this;
}

WrongAnimal::~WrongAnimal() {}

void WrongAnimal::makeSound() const {
	std::cout << "Some wrong generic animal sound" << std::endl;
}

std::string WrongAnimal::getType() const {
	return _type;
}

WrongCat::WrongCat() {
	_type = "WrongCat";
}

WrongCat::~WrongCat() {}

void WrongCat::makeSound() const {
	std::cout << "Meow? (but wrong)" << std::endl;
}
