/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:42:44 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/15 14:16:03 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length ++;
	return (length);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("Expected for \"42 Belgium\": 10\n");
	printf("Actual: %d", ft_strlen("42 Belgium"));
	printf("\n");
	printf("Expected for \"\": 0\n");
	printf("Actual: %d", ft_strlen(""));
	printf("\n");
	printf("Expected for \"B  a  \": 6\n");
	printf("Actual: %d", ft_strlen("B  a  "));
	printf("\n");
	return (0);
}
*/