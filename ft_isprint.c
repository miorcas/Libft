/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migorteg <migorteg@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 19:16:50 by migorteg          #+#    #+#             */
/*   Updated: 2024/12/03 19:16:53 by migorteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int c1 = 65;
	int c2 = 120;
	int c3 = 32;
	int c4 = 31;  // Out of range
	if (ft_isprint(c1))
	        printf("Value %d is printable.\n", c1);
	else
	        printf("Value %d is NOT printable.\n", c1);
	if (ft_isprint(c2))
		printf("Value %d is printable.\n", c2);
	else
		printf("Value %d is NOT printable.\n", c2);
	if (ft_isprint(c3))
		printf("Value %d is printable.\n", c3);
	else
		printf("Value %d is NOT printable.\n", c3);
	if (ft_isprint(c4))
		printf("Value %d is printable.\n", c4);
	else
		printf("Value %d is NOT printable.\n", c4);
	return (0);
}
*/
