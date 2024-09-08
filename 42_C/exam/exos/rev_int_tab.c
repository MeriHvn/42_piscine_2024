/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_int_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhovhan2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 23:03:24 by mhovhan2          #+#    #+#             */
/*   Updated: 2024/09/05 23:03:36 by mhovhan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	start;
	int	end;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab [start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}

#include <stdio.h>

int main(void)
{
    int tab[] = {1, 2, 3, 4, 5};
    int size = 5;
    
    printf("Original: ");
	int i = 0;
    while ( i < size)
	{
        printf("%d ", tab[i]);
		i++;
	}
    printf("\n");
    
    ft_rev_int_tab(tab, size);
    
    printf("Reversed: ");
	i = 0;
    while( i < size)
	{
        printf("%d ", tab[i]);
		i++;
	}
    printf("\n");
    
    return 0;
}
