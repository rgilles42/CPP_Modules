/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 04:23:45 by rgilles           #+#    #+#             */
/*   Updated: 2021/10/07 15:28:31 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <iostream>

class ClapTrap
{
public:
	ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap& src);
	~ClapTrap();

	ClapTrap&	operator=(const ClapTrap& rhm);
	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
private:
	std::string _name;
	int	_hitPts;
	int	_energyPts;
	int	_attackDmg;
};

#endif