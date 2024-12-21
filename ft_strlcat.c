/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migorteg <migorteg@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 19:56:29 by migorteg          #+#    #+#             */
/*   Updated: 2024/12/19 19:56:32 by migorteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (len_dst >= size)
		return (size + len_src);
	i = 0;
	while ((size - 1) > (len_dst + i) && src[i] != '\0')
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
/*
int	main(void)
{
	char dest[20] = "Hello, ";
	char *ori = "world!";
	size_t result = ft_strlcat(dest, ori, 12);
	
	printf("Final string: %s\n", dest);
	printf("Length of the final string: %zu\n", result);
	return(0);
}
*/
