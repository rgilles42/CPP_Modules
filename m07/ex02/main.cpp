/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 00:18:16 by rgilles           #+#    #+#             */
/*   Updated: 2021/11/05 17:10:25 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <Array.hpp>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));

    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }

    //Out of bounds index exceptions demo
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    //Copy constructor & deep copy demo
    Array<int>  n2(numbers);
    for (int i = 0; i < MAX_VAL; i++)
    {
        n2[i] = n2[i] + 1;
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != n2[i] - 1)
        {
            std::cerr << "Copy didn't apply changes" << std::endl;
            return 1;
        }
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "Editing copy edited source" << std::endl;
            return 1;
        }
    }

    const Array<int>    nconst(numbers);
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (nconst[i] != numbers[i])
        {
            std::cerr << "Unable to read from const instance" << std::endl;
            return 1;
        }
    }


    delete [] mirror;
    return 0;
}