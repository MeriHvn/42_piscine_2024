/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhovhan2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 01:05:39 by mhovhan2          #+#    #+#             */
/*   Updated: 2024/09/06 01:05:49 by mhovhan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *rev_print(char *str)
{
    int i =0;
    while(str[i])
        i++;
    while(--i > 0)
        write(1, &str[i], 1);
    if (str[0])
        write(1, &str[0], 1);
    return (str);
}

int main(int ac, char **av)
{
     
    if(ac >= 2)
       rev_print(av[1]);
}

// int main(void)
// {
//     rev_print("barev meri");
// }
