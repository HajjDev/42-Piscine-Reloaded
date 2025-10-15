/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:22:47 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/15 15:02:01 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]))
			count++;
		i++;
	}
	return (count);
}

/*
#include <stdio.h>

// Test function 1: Returns True if str contains the letter 'a'
int	contains_a(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'a')
			return (1);
		i++;
	}
	return (0);
}

// Test function 2: Returns true if string length is 3
int	is_len_3(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len == 3);
}

int	main(void)
{
	char *tab[] = {"alpha", "bravo", "cat", "delta", "echo", NULL};

	printf("Test 1: Counting strings with 'a'\n");
	printf("Expected: 4\n");
	printf("Actual:   %d\n\n", ft_count_if(tab, &contains_a));

	printf("Test 2: Counting strings with length 3\n");
	printf("Expected: 1\n");
	printf("Actual:   %d\n\n", ft_count_if(tab, &is_len_3));

	char *empty_tab[] = {NULL};
	printf("Test 3: Edge case with empty tab\n");
	printf("Expected: 0\n");
	printf("Actual:   %d\n\n", ft_count_if(empty_tab, &contains_a));

	char *tab_with_empty[] = {"", "a", "b", "", NULL};
	printf("Test 4: Tab with empty strings (testing contains_a)\n");
	printf("Expected: 1\n");
	printf("Actual:   %d\n\n", ft_count_if(tab_with_empty, &contains_a));

	return (0);
}
*/