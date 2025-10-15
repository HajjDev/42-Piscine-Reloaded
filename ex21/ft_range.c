/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:58:52 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/15 15:17:45 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
		return (NULL);
	array = malloc((max - min) * sizeof(int));
	if (!array)
		return (NULL);
	i = 0;
	while (i < max - min)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}

/*
#include <stdio.h>

void	print_array(int *arr, int size)
{
	int	i;

	i = 0;
	printf("[");
	while (i < size)
	{
		printf("%d", arr[i]);
		if (i < size - 1)
			printf(", ");
		i++;
	}
	printf("]\n");
}

int	main(void)
{
	int	*arr;

	printf("Test 1: ft_range(5, 10)\n");
	printf("Expected: [5, 6, 7, 8, 9]\n");
	arr = ft_range(5, 10);
	printf("Actual:   ");
	print_array(arr, 5);
	free(arr);
	printf("\n");

	printf("Test 2: ft_range(-3, 2)\n");
	printf("Expected: [-3, -2, -1, 0, 1]\n");
	arr = ft_range(-3, 2);
	printf("Actual:   ");
	print_array(arr, 5);
	free(arr);
	printf("\n");

	printf("Test 3: ft_range(10, 5)\n");
	printf("Expected: (null)\n");
	arr = ft_range(10, 5);
	printf("Actual:   %p\n", arr);
	printf("\n");

	printf("Test 4: ft_range(5, 5)\n");
	printf("Expected: (null)\n");
	arr = ft_range(5, 5);
	printf("Actual:   %p\n", arr);
	printf("\n");

	return (0);
}
*/