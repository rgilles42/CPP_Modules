/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:33:16 by rgilles           #+#    #+#             */
/*   Updated: 2021/09/29 14:33:19 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Karen.hpp>

int	main(int argc, char **argv)
{
	Karen	karen;

	if (argc == 2)
		karen.complain(argv[1]);
	return (0);
}