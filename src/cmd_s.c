/*
** EPITECH PROJECT, 2019
** cmd sa
** File description:
** push swap
*/

#include "my.h"

void sa(int *l_a)
{
    int v_temp;

    v_temp = l_a[1];
    l_a[1] = l_a[0];
    l_a[0] = v_temp;
    my_putstr("sa ");
}
