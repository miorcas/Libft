/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migorteg <migorteg@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 18:23:18 by migorteg          #+#    #+#             */
/*   Updated: 2024/12/19 18:23:19 by migorteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char str[] = "Hello, world!";
	int target = 'w';
	size_t n = 13;

	char *result = ft_memchr(str, target, n);

	if (result != NULL)
	{
		printf("Found '%c' at position: %zu\n", target, result - str);
	}
	else
	{
		printf("Character '%c' not found in the first %zu bytes.\n", target, n);
	}
	return (0);
}
*/
