/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migorteg <migorteg@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:37:50 by migorteg          #+#    #+#             */
/*   Updated: 2024/12/17 16:37:54 by migorteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned char		*s;
	size_t				i;

	if (dest == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = n;
	if (d > s)
	{
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	if (d < s)
		ft_memcpy(d, s, n);
	return (dest);
}
/*
int	main(void)
{
	char source[10] = "Hello";
	char destination[10] = "Byebye";
	printf("Destination before: %s\n", destination);
	ft_memmove(destination + 2, source, 2);
	printf("Destination afterwards: %s\n", destination);
	return (0);
}
*/
