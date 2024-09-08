/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhovhan2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 22:35:22 by mhovhan2          #+#    #+#             */
/*   Updated: 2024/09/05 22:37:06 by mhovhan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_nb(int nb)
{
    if (nb >= 10)
        print_nb(nb / 10);
    write(1, &"0123456789"[nb % 10], 1);
}

int	main(void)
{
    int n = 1;
    while(n <= 100)
    {
        if(n % 4 == 0 && n % 7 == 0)
            write(1, "fizzbuzz", 8);
        else if(n % 4 == 0)
            write(1, "fizz", 4);
        else if(n % 7 == 0)
            write(1, "buzz", 4);
        else
            print_nb(n);
        n++;
        write(1, "\n", 1);
    }
}
