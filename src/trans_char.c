/*
** EPITECH PROJECT, 2019
** trans_char
** File description:
** push swap
*/

#include "my.h"

int *trans_int(int ac, char **av)
{
    int *list = malloc((ac - 1) * sizeof(int));
    int j = 1;

    ac--;
    for (int i = 0; i != ac; i++) {
        list[i] = my_atoi(av[j]);
        j++;
    }
    return (list);
}
