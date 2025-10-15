/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:38:34 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/15 14:11:27 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt_rec(int i, int nb)
{
	if (nb > 2147395600)
		return (0);
	else if (i * i == nb)
		return (i);
	else if (i * i < nb)
		return (ft_sqrt_rec(i + 1, nb));
	return (0);
}

int	ft_sqrt(int nb)
{
	return (ft_sqrt_rec(0, nb));
}

/*
#include <stdio.h>

int	main(void)
{
	printf("Expected for 4: 2\n");
	printf("Actual: %d", ft_sqrt(4));
	printf("\n");
	printf("Expected for -1: 0\n");
	printf("Actual: %d", ft_sqrt(-1));
	printf("\n");
	printf("Expected for -4: 0\n");
	printf("Actual: %d", ft_sqrt(-4));
	printf("\n");
	printf("Expected for 3: 0\n");
	printf("Actual: %d", ft_sqrt(3));
	printf("\n");
	printf("Expected for 25: 5\n");
	printf("Actual: %d", ft_sqrt(25));
	printf("\n");
	return (0);
}
*/