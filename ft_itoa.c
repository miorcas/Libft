/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migorteg <migorteg@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:30:48 by migorteg          #+#    #+#             */
/*   Updated: 2024/12/19 14:30:53 by migorteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_num_len(int n)
{
	unsigned int	nbr;
	size_t			len;

	len = 0;
	if (n == -2147483648)
		return (11);
	if (n <= 0)
	{
		len++;
		nbr = n * -1;
	}
	else
	{
		nbr = n;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	unsigned int	num;
	char			*a;
	size_t			i;

	num = n;
	i = ft_num_len(n);
	a = (char *)malloc((i + 1) * sizeof(char));
	if (!a)
		return (NULL);
	if (n == 0)
		a[0] = '0';
	a[i] = '\0';
	if (n < 0)
	{
		a[0] = '-';
		num = n * -1;
	}
	while (num > 0)
	{
		a[i - 1] = (num % 10) + '0';
		num = num / 10;
		i--;
	}
	return (a);
}
/*
int	main (void)
{
	char *str;
	str = ft_itoa(123456);
	printf("Returns: %s\n", str);
	free(str);

	str = ft_itoa(-123456);
	printf("Returns: %s\n", str);
	free(str);

	str = ft_itoa(0);
	printf("Returns: %s\n", str);
	free(str);

	str = ft_itoa(-2147483648);
	printf("Returns: %s\n", str);
	free(str);
}
*/
