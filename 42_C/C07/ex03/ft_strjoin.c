/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhovhan2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 23:48:33 by mhovhan2          #+#    #+#             */
/*   Updated: 2024/09/04 17:43:19 by mhovhan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

int	ft_strslen(char **strs, int size, char *sep)
{
	int	i;
	int	size_f;

	i = 0;
	size_f = 0;
	while (i < size && strs[i])
	{
		size_f = size_f + (ft_strlen(strs[i]));
		if (i != size - 1)
			size_f = size_f + (ft_strlen(sep));
		i++;
	}
	return (size_f);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;

	i = 0;
	if (size == 0)
	{
		str = malloc(sizeof(char));
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	str = malloc((ft_strslen(strs, size, sep) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[0] = '\0';
	while (i < size)
	{
		str = ft_strcat(str, strs[i]);
		if (i != size - 1)
			str = ft_strcat(str, sep);
		i++;
	}
	return (str);
}
