/*
** EPITECH PROJECT, 2019
** trans_char
** File description:
** push swap
*/

#include "my.h"

int *trans_int(int ac, char **av)
{
    int *list = malloc(ac);
    int j = 1;

    ac--;
    for (int i = 0; i != ac; i++) {
        list[i] = my_atoi(av[j]);
        j++;
    }
    return (list);
}
