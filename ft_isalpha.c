/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migorteg <migorteg@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 18:17:31 by migorteg          #+#    #+#             */
/*   Updated: 2024/12/03 18:17:37 by migorteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	int alpha = 'a';
	int alpha2 = '2';
	
	alpha = ft_isalpha(alpha);
	alpha2 = ft_isalpha(alpha2);
	if (alpha)
		printf("Alpha?%c : OK\n", alpha);
	else
		printf("Alpha?%c : KO \n", alpha);
	if (alpha2)
		printf("Alpha?%c : OK\n", alpha2);
	else
		printf("Alpha?%c : KO \n", alpha2);
	
}
*/
