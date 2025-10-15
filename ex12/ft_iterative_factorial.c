/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:32:12 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/15 19:03:44 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	j;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	j = nb;
	while (j > 1)
	{
		j--;
		if (nb > 2147483648 / j)
			return (0);
		else
			nb *= j;
	}
	return (nb);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("Expected for 0: 1\n");
	printf("Actual: %d", ft_iterative_factorial(0));
	printf("\n");
	printf("Expected for -1: 0\n");
	printf("Actual: %d", ft_iterative_factorial(-1));
	printf("\n");
	printf("Expected for 5: 120\n");
	printf("Actual: %d", ft_iterative_factorial(5));
	printf("\n");
	return (0);
}
*/