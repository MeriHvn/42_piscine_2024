/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhovhan2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 22:33:34 by mhovhan2          #+#    #+#             */
/*   Updated: 2024/09/05 22:33:44 by mhovhan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putstr(char *str)
{
    while(*str)
    {
        write(1, str, 1);
        str++;
    }
    
}

void rot13(char *str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = ((str[i] - 'a' + 13) % 26) + 'a';
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = ((str[i] - 'A' + 13) % 26) + 'A';
        }
        i++;
    }
    putstr(str);
}

int main(int ac, char **av)
{
    if(ac > 1)
        rot13(av[1]);
    write(1, "\n", 1);
    return 0;
}
