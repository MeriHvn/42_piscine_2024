/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhovhan2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:13:03 by mhovhan2          #+#    #+#             */
/*   Updated: 2024/08/22 16:41:33 by mhovhan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*f;

	if (!*to_find)
		return (str);
	while (*str != '\0')
	{
		s = str;
		f = to_find;
		while (*s == *f && *f != '\0')
		{
			s++;
			f++;
		}
		if (*f == '\0')
			return (str);
		str++;
	}
	return (0);
}
