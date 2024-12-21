/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migorteg <migorteg@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 18:03:36 by migorteg          #+#    #+#             */
/*   Updated: 2024/12/19 18:03:41 by migorteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;
	size_t				i;

	ptr1 = s1;
	ptr2 = s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char ptr1[] = "Hello world";
	char ptr2[] = "Hello world";
	int result = ft_memcmp(ptr1, ptr2, 20);
	
	if (result == 0)
		printf("Equal pointers.\n");
	else if (result > 0)
		printf("ptr1 greater than ptr2.\n");
	else
		printf("ptr1 smaller than ptr2.\n");
	return (0);
}
*/
