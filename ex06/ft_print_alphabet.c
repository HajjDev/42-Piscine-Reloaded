/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:14:10 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/15 18:57:05 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		ft_putchar(c);
		c++;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	printf("Expected: abcdefghijklmnopqrstuvwxyz\n");
	printf("Actual:   ");
	fflush(stdout);
	ft_print_alphabet();
	printf("\n");
	return (0);
}
*/