/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migorteg <migorteg@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 18:22:36 by migorteg          #+#    #+#             */
/*   Updated: 2024/12/03 18:22:38 by migorteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int	main(void)
{
	int digit = 'a';
	int digit2 = '2';
	
	digit = ft_isdigit(digit);
	digit2 = ft_isdigit(digit2);
	if (digit)
		printf("Digit?%c : OK\n", digit);
	else
		printf("Digit?%c : KO \n", digit);
	if (digit2)
		printf("Digit?%c : OK\n", digit2);
	else
		printf("Digit?%c : KO \n", digit2);
	return(0);
}
*/
