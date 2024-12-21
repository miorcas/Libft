/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migorteg <migorteg@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:53:18 by migorteg          #+#    #+#             */
/*   Updated: 2024/12/10 16:20:50 by migorteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			charac;

	i = 0;
	charac = (char)c;
	while (s[i])
	{
		if (s[i] == charac)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == charac)
		return ((char *)&s[i]);
	return (NULL);
}
/*
int	main(void)
{
	const char *wrd = "Hello";
	char *result = ft_strchr(wrd, 'm');
	
	if (result != NULL)
	{
        	printf("Character: %c\n", *result);
    	} else
    	{
        	printf("Character not found\n");
    	}

}
*/
