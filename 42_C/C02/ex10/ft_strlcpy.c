/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhovhan2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:15:47 by mhovhan2          #+#    #+#             */
/*   Updated: 2024/08/20 13:10:54 by mhovhan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	a;

	i = 0;
	a = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (size > 0)
	{
		while (a < size -1 && src[a] != '\0')
		{
			dest[a] = src[a];
			a++;
		}
		dest[a] = '\0';
	}
	return (i);
}
