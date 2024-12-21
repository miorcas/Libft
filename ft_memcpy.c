/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migorteg <migorteg@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:37:27 by migorteg          #+#    #+#             */
/*   Updated: 2024/12/17 16:37:32 by migorteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned char		*s;

	if (dest == (void *)0 && src == (void *)0)
		return (dest);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n > 0)
	{
		*(d++) = *(s++);
		n--;
	}
	return (dest);
}
/*
int	main (void)
{
	char ori[10] = "Hello";
	char fin[10] = "Bye";
	printf("fin before memcpy: %s\n", fin);
	
	ft_memcpy(fin + 2, fin, 5);
	printf("fin after memcpy: %s", fin);
	return(0);
}
*/
