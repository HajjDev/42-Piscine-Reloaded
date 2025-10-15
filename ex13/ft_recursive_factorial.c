/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:34:41 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/15 19:04:01 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 1 || nb == 0)
		return (1);
	if (nb < 0 || nb > 13)
		return (0);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

/*
#include <stdio.h>

int	main(void)
{
	printf("Expected for 0: 1\n");
	printf("Actual: %d", ft_recursive_factorial(0));
	printf("\n");
	printf("Expected for -1: 0\n");
	printf("Actual: %d", ft_recursive_factorial(-1));
	printf("\n");
	printf("Expected for 5: 120\n");
	printf("Actual: %d", ft_recursive_factorial(5));
	printf("\n");
	return (0);
}
*/