/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhovhan2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 06:02:07 by mhovhan2          #+#    #+#             */
/*   Updated: 2024/08/22 06:15:21 by mhovhan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	len;
	int	j;

	i = 0;
	len = ft_strlen(base);
	while ((base[i] >= 'a' && base[i] <= 'z')
		|| (base[i] >= 'A' && base[i] <= 'Z')
		|| (base[i] <= '9' && base[i] >= '0'))
	{
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (1);
			j++;
		}
		i++;
	}
	if (i == len && len > 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	nb;

	nb = nbr;
	len = ft_strlen(base);
	if (!ft_check_base(base))
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		if (nb < len)
			write(1, &base[nb], 1);
		else
		{
			ft_putnbr_base(nb / len, base);
			write(1, &base[nb % len], 1);
		}
	}
}
