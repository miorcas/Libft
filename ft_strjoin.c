/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migorteg <migorteg@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:00:02 by migorteg          #+#    #+#             */
/*   Updated: 2024/12/17 17:00:10 by migorteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*comb;

	comb = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!comb)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		comb[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		comb[i + j] = s2[j];
		j++;
	}
	comb[i + j] = '\0';
	return (comb);
}
/*
int	main(void)
{
	char *wrd1 = "Bye, i have ";
	char *wrd2 = "nothing";
	char *final = ft_strjoin(wrd1, wrd2);
	if (final)
	{
		printf("Final chain: %s\n", final);
		free(final);
	}
	else
	{
		printf("Error when joining\n");
	}
	return (0);
}
*/
