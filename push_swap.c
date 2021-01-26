/*
** EPITECH PROJECT, 2019
** push_sawp.c
** File description:
** sort list
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "include/my.h"
#include "strcut.h"

stock_t partionner(int ac, char **av, stock_t pop)
{
    pop.sorter1 = 0;
    pop.sorter2 = ac - 2;
    pop = swaper(ac, av, pop);

    return (pop);
}

int check(int ac, char **av)
{
    int counter = 1;
    int count = 2;
    int checker = 0;
    int value_1 = 0;
    int value_2 = 0;

    while (counter < ac - 1) {
        value_1 = my_getnbr(av[counter]);
        value_2 = my_getnbr(av[count]);
        if (value_1 > value_2)
            checker++;
        counter++;
        count++;
    }
    return (checker);
}

int loop_checker(int ac,char **av, stock_t pop)
{
    int counter = 0;
    int truth = 0;

    while (counter != ac - 2) {
        if (pop.array[counter] > pop.array[counter + 1])
            truth++;
        counter++;
    }
    return (truth);
}

int *bubble(int ac,char **av, stock_t pop)
{
    int stocker = 0;
    int counter = 0;
    int check_loop = 84;

    while (check_loop != 0) {
        if (pop.array[counter] > pop.array[counter + 1]){
            stocker = pop.array[counter];
            pop.array[counter] = pop.array[counter + 1];
            pop.array[counter + 1] = stocker;
        }
        counter++;
        if (counter == ac - 2)
            counter = 0;
        check_loop = loop_checker(ac, av, pop);
    }
    return (pop.array);
}

int main(int ac,char **av, stock_t pop)
{
    int checker = check(ac, av);
    if (checker == 0) {
        putchar('\n');
        return (0);
    }
    else {
        pop = partionner(ac, av, pop);
        pop.array = bubble(ac, av, pop);
    }
    printer(ac, av, pop);
    free(pop.array);
    return (0);
}
