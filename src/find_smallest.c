/*
** EPITECH PROJECT, 2019
** smallest
** File description:
** push swap
*/

#include "my.h"

int smallest(int *l_a, int nb)
{
    int temp = l_a[0];
    int i_temp = 0;

    for (int i = 0; i < nb; i++) {
        if (temp > l_a[i]) {
            temp = l_a[i];
            i_temp = i;
        }
    }
    return (i_temp);
}
