/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramos-a <jramos-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 15:51:43 by jramos-a          #+#    #+#             */
/*   Updated: 2025/07/14 15:51:43 by jramos-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

class Animal {
	public:
		Animal();
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		~Animal();
		virtual void makeSound() const;
		std::string getType() const;

	protected:
		std::string _type;
};

class Dog : public Animal {
	public:
		Dog();
		void makeSound() const;
};

class Cat : public Animal {
	public:
		Cat();
		void makeSound() const;
};

class WrongAnimal {
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& other);
		WrongAnimal& operator=(const WrongAnimal& other);
		~WrongAnimal();
		void makeSound() const;
		std::string getType() const;

	protected:
		std::string _type;
};

class WrongCat : public WrongAnimal {
	public:
		WrongCat();
		~WrongCat();
		void makeSound() const ;
};


#endif
