/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:23:45 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/15 14:29:01 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
#include <stdio.h>

int	main(void)
{
	int	a = 2;
	int	b = 4;

	printf("Value of a before swap: %d\n", a);
	printf("Value of b before swap: %d\n", b);
	ft_swap(&a, &b);
	printf("Value of a after changing: %d\n", a);
	printf("Value of b after changing: %d\n", b);
}
*/