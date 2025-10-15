/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:16:07 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/15 18:57:09 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	c;

	c = '0';
	while (c <= '9')
	{
		ft_putchar(c);
		c++;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	printf("Expected: 0123456789\n");
	printf("Actual:   ");
	fflush(stdout);
	ft_print_numbers();
	printf("\n");
	return (0);
}
*/