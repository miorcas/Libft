/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migorteg <migorteg@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:42:56 by migorteg          #+#    #+#             */
/*   Updated: 2024/12/17 16:42:59 by migorteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = 0;
	i = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}
/*
int	main(void)
{
	char ori[] = "HelloWorld";
	char fin[6] = "";
	char fin2[5] = "";

	printf("fin before copying: %s\n", fin);
	ft_strlcpy(fin, ori, 6);
	printf("fin after copying: %s\n", fin);
	ft_strlcpy(fin2, ori, 5);
	printf("fin2 after copying: %s\n", fin2);
	printf("src length: %d\n", ft_strlcpy(fin,ori,8));
	return(0);
}
*/
