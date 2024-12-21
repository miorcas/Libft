/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migorteg <migorteg@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:43:16 by migorteg          #+#    #+#             */
/*   Updated: 2024/12/17 16:43:18 by migorteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (NULL);
	i = start;
	j = 0;
	while (j < len)
	{
		sub[j++] = s[i++];
	}
	sub[j] = '\0';
	return (sub);
}
/*
int	main(void)
{
	char const *str = "Hello world";
	unsigned int begin = 5;
	size_t length = 3;
	char *substring = ft_substr(str, begin, length);
	
	if (substring)
	{
		printf("Subchain: %s\n", substring);
		free(substring);
	}
	else
	{
		printf("Error\n");
	}
	return(0);
}
*/
