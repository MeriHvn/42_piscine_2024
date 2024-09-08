/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhovhan2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 15:29:42 by mhovhan2          #+#    #+#             */
/*   Updated: 2024/09/01 18:45:28 by mhovhan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	ft_check_base(char *base, int base_size);
int	ft_strlen(char *str);

int	get_strlen(int n, int base_len)
{
	int	len;

	len = 2;
	if (n < 0)
	{
		len ++;
		n = -n;
	}
	while (n >= base_len)
	{
		n /= base_len;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr, int size_base_to, char *base_to)
{
	char	*str;
	long	var;
	int		i;

	var = nbr;
	i = get_strlen(var, size_base_to) - 1;
	str = malloc ((i + 1) * sizeof (char));
	if (!str)
		return (NULL);
	if (var == 0)
	{
		str[0] = base_to[0];
		str[1] = '\0';
	}
	if (var < 0)
	{
		var *= -1;
		str[0] = '-';
	}
	while (var > 0 && i--)
	{
		str[i] = base_to[var % size_base_to];
		var = var / size_base_to;
	}
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	size_base_to;

	size_base_to = ft_strlen(base_to);
	if (ft_check_base(base_from, ft_strlen(base_from)) == 1
		|| ft_check_base(base_to, size_base_to) == 1)
		return (NULL);
	else
		return (ft_itoa(ft_atoi_base(nbr, base_from), size_base_to, base_to));
}
