/*
** EPITECH PROJECT, 2019
** my_atoi
** File description:
** 
*/

int my_getnbr(char const *str)
{
    int nb = 0;
    int counter = 0;
    int minus = 0;
    
    while (str[counter] != '\0')
    {
        if (str[counter] >= '0' && str[counter] <= '9') {
            nb *= 10;
            nb += str[counter] - '0';
        }
        else {
        }
        counter++;
    }
    if (str[0] == '-')
        nb = -1 * nb;
    return (nb);
}
