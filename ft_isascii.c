/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migorteg <migorteg@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 18:52:58 by migorteg          #+#    #+#             */
/*   Updated: 2024/12/03 18:53:01 by migorteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int c1 = 'A';
	int c2 = 'x';
	int c3 = 127; // 'DEL'
	int c4 = 128; // Fuera de rango
	int c5 = -1;  // Fuera de rango
	int c6 = ' ';
	if (ft_isascii(c1))
		printf("Value %c is ASCII.\n", c1);
	else
		printf("Value %c is NOT ASCII.\n", c1);
	if (ft_isascii(c2))
		printf("Value %d is ASCII.\n", c2);
	else
		printf("Value %d is NOT ASCII.\n", c2);
	if (ft_isascii(c3))
		printf("Value %d is ASCII.\n", c3);
	else
		printf("Value %d is NOT ASCII.\n", c3);
	if (ft_isascii(c4))
		printf("Value %d is ASCII.\n", c4);
	else
		printf("Value %d is NOT ASCII.\n", c4);
	if (ft_isascii(c5))
		printf("Value %d is ASCII.\n", c5);
	else
		printf("Value %d is NOT ASCII.\n", c5);
	if (ft_isascii(c6))
		printf("Value %d is ASCII.\n", c6);
	else
		printf("Value %d is NOT ASCII.\n", c6);
	return (0);
}
*/
