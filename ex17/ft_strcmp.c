/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:44:03 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/15 15:01:21 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("Official: %d\n", strcmp("a", "b"));
	printf("Actual: %d\n", ft_strcmp("a", "b"));
	printf("\n");
	printf("Official: %d\n", strcmp("", ""));
	printf("Actual: %d\n", ft_strcmp("", ""));
	printf("\n");
	printf("Official: %d\n", strcmp("AaAaAa", "AaAaAa"));
	printf("Actual: %d\n", ft_strcmp("AaAaAa", "AaAaAa"));
	return (0);
}
*/