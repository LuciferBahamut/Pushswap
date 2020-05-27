/*
** EPITECH PROJECT, 2019
** check
** File description:
** push swap
*/

int bubble_check(int *l_a, int ac)
{
    int j = ac - 2;

    for (int i = 0; i != j; i++)
    {
        if (l_a[i] > l_a[i + 1])
            return (1);
    }
    return (0);
}
