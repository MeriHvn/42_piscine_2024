/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhovhan2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:43:10 by mhovhan2          #+#    #+#             */
/*   Updated: 2024/08/15 16:03:42 by mhovhan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar (a / 10 + 48);
			ft_putchar (a % 10 + 48);
			ft_putchar (' ');
			ft_putchar (b / 10 + 48);
			ft_putchar (b % 10 + 48);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
