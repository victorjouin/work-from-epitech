/*
** EPITECH PROJECT, 2019
** genial
** File description:
** 
*/

#ifndef POPIP_H
#define POPIP_H

typedef struct stock_s
{
    int sorter1;
    int sorter2;
    int *array;
    int mid;
    int somme;
    int pivot;
    int place1;
    int place2;

}stock_t;

stock_t stock(int ac, char **av, stock_t pop);
stock_t algo_1(stock_t pop);
stock_t algo_2 (stock_t pop);
void printer(int ac, char **av, stock_t pop);
stock_t swaper(int ac, char **av, stock_t pop);
stock_t partionner(int ac, char **av, stock_t pop);

#endif
