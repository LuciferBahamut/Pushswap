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
    int *l_b = malloc((ac - 2) * sizeof(int));
    int nb = ac - 1;

    if (ac == 2) {
        my_putchar('\n');
        return (0);
    }
    else if (bubble_check(l_a, ac) == 0) {
        my_putchar('\n');
        return (0);
    }
    else {
        sort(l_a, l_b, nb, nb);
        my_putchar('\n');
    }
    free(l_a);
    return (0);
}
