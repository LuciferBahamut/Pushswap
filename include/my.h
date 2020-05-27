/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** push swap
*/

#ifndef MY_H_
#define MY_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void my_putchar(char c);
int my_putstr(char const *str);
int bubble_check(int *l_a, int ac);
int my_atoi(char const *str);
int *trans_int(int ac, char **av);
int smallest(int *l_a, int nb);
void sort(int *l_a, int *l_b, int nb, int nb_max);
void ra(int *l_a, int ac, int f_nb);
void pa(int *l_b, int *l_a, int ac, int i);
void pb(int *l_a, int *l_b, int ac);
void sa(int *l_a);

#endif
