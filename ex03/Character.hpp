/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramos-a <jramos-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 09:13:47 by jramos-a          #+#    #+#             */
/*   Updated: 2025/07/16 13:31:43 by jramos-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {
	public:
		// Character();
		Character(std::string cname);
		Character(const Character& other);
		Character& operator=(const Character& other);
		~Character();
		
	protected:
		std::string _cname;
};

#endif
