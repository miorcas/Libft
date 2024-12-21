/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migorteg <migorteg@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:58:28 by migorteg          #+#    #+#             */
/*   Updated: 2024/12/19 15:58:33 by migorteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;
	size_t			len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	res = (char *)malloc((len + 1) * (sizeof(char)));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
int	main(void)
{
	char *wrd = "test";
	char *result = ft_strmapi(wrd, to_upper);
	if (result)
	{
		printf("Original: %s\n", wrd);
		printf("Después: %s\n", result);
		free(result);
	}
	return (0);
}
*/
