/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:20:50 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/15 15:16:40 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}

/*
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar((n % 10) + '0');
}

int	main(void)
{
	int	tab1[] = {1, 2, 3, 4, 5};
	int	tab2[] = {-10, 0, 50, 100};
	int	tab3[] = {42};

	printf("Test 1: [1, 2, 3, 4, 5]\n");
	ft_foreach(tab1, 5, &ft_putnbr);
	ft_putchar('\n');
	printf("\n");

	printf("Test 2: [-10, 0, 50, 100]\n");
	ft_foreach(tab2, 4, &ft_putnbr);
	ft_putchar('\n');
	printf("\n");

	printf("Test 3: [42]\n");
	ft_foreach(tab3, 1, &ft_putnbr);
	ft_putchar('\n');
	printf("\n");

	printf("Test 4: Longueur de 0\n");
	ft_foreach(tab1, 0, &ft_putnbr);
	ft_putchar('\n');

	return (0);
}
*/