/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migorteg <migorteg@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:38:07 by migorteg          #+#    #+#             */
/*   Updated: 2024/12/17 16:38:11 by migorteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char str[10];
	size_t str_len = 10;
	size_t i = 0;
	ft_memset(str, 'A', str_len);
	
	while (i < str_len)
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
	return(0);
}
*/
