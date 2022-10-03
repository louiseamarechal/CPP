/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AbastractClassAndInterfaces.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:22:51 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/03 14:30:30 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Classe Abstraite: se compose d'au moins une fonction virtuelle pure
class AHuman {

	private:
		std::string _name;

	public:
		virtual std::string	myName(std::string name) = 0;
		int					myAge(int age);
};

// Interface = compose que de fonctions virtuelles pures
//		permet de definir des comportements
//		ne peut pas avoir d'attributs contrairement a la classe abstraite
class IHuman {

	public:
		virtual std::string	myName(std::string name) = 0;
		virtual				myAge(int age) = 0;

};