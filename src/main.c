/*
** EPITECH PROJECT, 2019
** main
** File description:
** push swap
*/

#include "my.h"

int main(int ac, char **av)
{
    int *l_a = trans_int(ac, av);
    int *l_b = malloc(ac);

    if (ac == 2) {
        my_putchar('\n');
        return (0);
    }
    if (bubble_check(l_a, ac) == 0) {
        my_putchar('\n');
        return (0);
    }
    if (ac > 2) {
        return (0);
    }
    return (0);
}
