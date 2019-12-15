/*
** EPITECH PROJECT, 2019
** sort
** File description:
** push swap
*/

#include "my.h"

void sort(int *l_a, int *l_b, int nb, int nb_max)
{
    int f_nb = l_a[0];
    int i_temp = smallest(l_a, nb);
    int temp = l_a[i_temp];

    if (i_temp == 1) {
        sa(l_a);
        pb(l_a, l_b, nb);
        nb--;
    }
    if (nb == 1)
        for (int i = 1; i < nb_max; i++)
            pa(l_b, l_a, nb_max, i);
    if (nb != 1) {
        if (i_temp == 0) {
            pb(l_a, l_b, nb);
            nb--;
        }
        else
            ra(l_a, nb, f_nb);
        sort(l_a, l_b, nb, nb_max);
    }
}
