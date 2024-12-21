/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migorteg <migorteg@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:36:19 by migorteg          #+#    #+#             */
/*   Updated: 2024/12/17 16:36:22 by migorteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
/*
int	main(void)
{
	char str[10] = "Hello123";
	printf("Antes: %s\n", str);
	
	printf("Después: ");
	ft_bzero(str, 4); //Puts to 0 the first 4 spaces
	size_t j = 0;
	while (j < 10)
	{
		printf("%c", str[j]); //"While" goes through and print first char
		j++;
	}
	printf("\n");
	return(0);
}
*/
