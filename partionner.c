/*
** EPITECH PROJECT, 2019
** push_swap
** File description:
** pre_sort
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "include/my.h"
#include "strcut.h"

stock_t stock(int ac, char **av, stock_t pop)
{
    int counter = 0;

    pop.array = malloc(sizeof(int) * (ac + 1));
    while (counter < ac - 1) {
        pop.array[counter] = my_getnbr(av[counter + 1]);
        counter++;
    }
    return (pop);
}

stock_t algo_1(stock_t pop)
{
    while (pop.array[pop.sorter1] != pop.pivot) {
        if (pop.array[pop.sorter1] >= pop.pivot) {
            pop.place1 = pop.sorter1;
            return (pop);
        }
        else {
            pop.sorter1++;
        }
    }
    return (pop);
}

stock_t algo_2 (stock_t pop)
{
    while (pop.array[pop.sorter2] != pop.pivot) {
        if (pop.array[pop.sorter2] <= pop.pivot) {
            pop.place2 = pop.sorter2;
            return (pop);
        }
        else {
            pop.sorter2--;
        }
    }
    return (pop);
}

void printer(int ac, char **av, stock_t pop)
{
    int counter = 0;

    while (counter != ac - 1) {
        my_put_nbr(pop.array[counter]);
        my_putchar(' ');
        counter++;
    }
}

stock_t swaper(int ac, char **av, stock_t pop)
{
    pop = stock(ac, av, pop);
    pop.pivot = pop.array[ac/2];

    int counter = pop.pivot;
    int stocker = 0;

    while (counter > 0) {
        pop = algo_1(pop);
        pop = algo_2(pop);
        stocker = pop.array[pop.place1];
        pop.array[pop.place1] = pop.array[pop.place2];
        pop.array[pop.place2] = stocker;
        counter--;
    }
    return (pop);
}
