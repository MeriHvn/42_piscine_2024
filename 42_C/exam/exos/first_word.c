/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhovhan2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 23:50:38 by mhovhan2          #+#    #+#             */
/*   Updated: 2024/09/05 23:50:43 by mhovhan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void firstword(char *str)
{
    int i = 0;
    while(str[i] == ' ' || str[i] == '\t')
        i++;
    while(str[i] && (!(str[i] == ' ' || str[i] == '\t')))
    {
        write(1, &str[i], 1);
        i++;
    }
}


int main(int ac, char **av)
{
    if(ac != 3)
        firstword(av[1]);
    write(1, "\n", 1);
}
