/*
** EPITECH PROJECT, 2019
** cmd ra && rb
** File description:
** push swap
*/

#include "my.h"

void ra(int *l_a, int ac, int f_nb)
{
    for (int i = 0; i < ac; i++)
        l_a[i] = l_a[i + 1];
    l_a[ac - 1] = f_nb;
    my_putstr("ra ");
}
