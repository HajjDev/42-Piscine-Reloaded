/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:30:09 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/15 14:31:50 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

int	main(void)
{
	int	a = 4;
	int	b = 2;
	int	div = 0;
	int	mod = 0;

	printf("Value of a: %d\n", a);
	printf("Value of b: %d\n", b);
	ft_div_mod(a, b, &div, &mod);
	printf("Value of div of a by b: %d\n", div);
	printf("Value of mod of a by b: %d\n", mod);
}
*/