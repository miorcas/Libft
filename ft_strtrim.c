/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migorteg <migorteg@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:39:03 by migorteg          #+#    #+#             */
/*   Updated: 2024/12/19 16:39:06 by migorteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	i;
	size_t	j;
	size_t	len_s;

	if (!set || !s1)
		return (NULL);
	len_s = ft_strlen(s1);
	i = 0;
	while (s1[i] != '\0' && (ft_strchr(set, s1[i]) != NULL))
	{
		i++;
	}
	j = len_s;
	while (j != 0 && (ft_strrchr(set, s1[j]) != NULL))
	{
		j--;
	}
	if (*s1 == '\0' || i > j)
		return (ft_strdup(""));
	if (*set == '\0')
		return (ft_strdup(s1));
	ptr = ft_substr(s1, i, j - i + 1);
	return (ptr);
}
/*
int	main(void)
{
	char const *str = "  --maelstrom- ";
	char const *to_cut = " -";
	char 	*result = ft_strtrim(str, to_cut);
	if (result == NULL)
	{
		printf("Error allocating memory\n");
		return(1);
	}
	if (result)
	{
		printf("Original: %s\n", str);
		printf("After: %s\n", result);
		free(result);
		return (0);
	}	
}
*/
