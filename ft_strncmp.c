/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migorteg <migorteg@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:34:34 by migorteg          #+#    #+#             */
/*   Updated: 2024/12/10 19:15:51 by migorteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n && ((s1[i] == '\0' && s2[i] != '\0') || \
	(s1[i] != '\0' && s2[i] == '\0')))
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
/*
int	main (void)
{
	const char wrd1[] = "Hello";
	const char wrd2[] = "Helo";
	int result = ft_strncmp(wrd1, wrd2, 2);
	if(result == 0)
		printf("%s and %s are equal: %d", wrd1, wrd2, result);
	else
	{
		if(result > 0)
			printf("Word 1 %s > Word 2 %s: %d", wrd1, wrd2, result);
		else
			printf("Word 2 %s > Word 1 %s: %d", wrd2, wrd1, result);
	}
	return (0);
}
*/
