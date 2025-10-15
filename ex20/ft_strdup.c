/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:50:23 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/15 15:12:25 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	length;

	length = 0;
	while (src[length])
		length++;
	return (length);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str1 = "Hello World!";
	char	*str2 = "";
	char	*str3 = "Duplicate this string.";
	char	*dup1;
	char	*dup2;
	char	*dup3;

	dup1 = ft_strdup(str1);
	printf("Original:  \"%s\"\n", str1);
	printf("Duplicate: \"%s\"\n", dup1);
	printf("Strcmp result (0 is success): %d\n\n", strcmp(str1, dup1));
	free(dup1);

	dup2 = ft_strdup(str2);
	printf("Original:  \"%s\"\n", str2);
	printf("Duplicate: \"%s\"\n", dup2);
	printf("Strcmp result (0 is success): %d\n\n", strcmp(str2, dup2));
	free(dup2);

	dup3 = ft_strdup(str3);
	printf("Original:  \"%s\"\n", str3);
	printf("Duplicate: \"%s\"\n", dup3);
	printf("Strcmp result (0 is success): %d\n\n", strcmp(str3, dup3));
	free(dup3);

	return (0);
}
*/