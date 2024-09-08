/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhovhan2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:07:24 by mhovhan2          #+#    #+#             */
/*   Updated: 2024/09/01 22:42:36 by mhovhan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact_nb;

	fact_nb = nb - 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (fact_nb != 0)
	{
		nb *= fact_nb;
		--fact_nb;
	}
	return (nb);
}
