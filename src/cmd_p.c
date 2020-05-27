/*
** EPITECH PROJECT, 2019
** cmd pa && pb
** File description:
** push swap
*/

#include "my.h"

void pa(int *l_b, int *l_a, int ac, int i)
{
    int nb_b = ac - 1;

    l_a[0] = l_a[ac];
    l_a[0] = l_b[0];
    for (int i = 0; i < nb_b - 1; i++)
        l_a[i + 1] = l_a[i];
    for (int i = 0; i < nb_b - 1; i++)
        l_b[i] = l_b[i + 1];
    nb_b--;
    if (i == ac - 1)
        my_putstr("pa");
    else
        my_putstr("pa ");
}

void pb(int *l_a, int *l_b, int ac)
{
    int nb_b = ac - 1;

    l_b[0] = l_a[0];
    for (int i = 0; i < ac; i++)
        l_a[i] = l_a[i + 1];
    for (int i = 0; i < nb_b - 1; i++)
        l_b[i + 1] = l_b[i];
    nb_b--;
    my_putstr("pb ");
}
