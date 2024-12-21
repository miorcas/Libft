/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migorteg <migorteg@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:54:55 by migorteg          #+#    #+#             */
/*   Updated: 2024/12/19 14:54:57 by migorteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wrdcount(char const *s, char c)
{
	size_t	count;

	if (*s == '\0' || !*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c && *s != '\0')
			s++;
		if (*s != '\0' && *s != c)
			count++;
		while (*s != '\0' && *s != c)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	wrd_len;
	size_t	i;

	array = (char **)malloc((ft_wrdcount(s, c) + 1) * sizeof(char *));
	if (s == NULL || array == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s != '\0')
			s++;
		if (*s != '\0')
		{
			if (!ft_strchr(s, c))
				wrd_len = ft_strlen(s);
			else
				wrd_len = ft_strchr(s, c) - s;
			array[i++] = ft_substr(s, 0, wrd_len);
			s = s + wrd_len;
		}
	}
	array[i] = NULL;
	return (array);
}
/*
int	main(void)
{
	char *str = "Hello how are you";
	char delim = ' ';
	char **result;
	i = 0;
	result = ft_split(str, delim);
	printf("Las palabras son:\n");
	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}
*/
