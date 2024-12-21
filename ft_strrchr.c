/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migorteg <migorteg@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:59:52 by migorteg          #+#    #+#             */
/*   Updated: 2024/12/10 16:59:55 by migorteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			charac;
	char			*res;

	i = 0;
	res = NULL;
	charac = (char)c;
	while (s[i])
	{
		if (s[i] == charac)
			res = (char *)&s[i];
		i++;
	}
	if (s[i] == charac)
		res = (char *)&s[i];
	return (res);
}
/*
int	main(void)
{
	const char *wrd = "Hello world";
	char ch = 'o';
	char *result = ft_strrchr(wrd, ch);
	
	if (result != NULL)
        	printf("Pointer: %s\n", result);
    	else
        	printf("Character not found\n");
	return (0);
}
*/
