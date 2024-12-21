/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migorteg <migorteg@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 18:37:43 by migorteg          #+#    #+#             */
/*   Updated: 2024/12/03 18:37:50 by migorteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) || \
	(c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	int alnum1 = '$';
	int alnum2 = 'a';
	int alnum3 = '9';
	int alnum4 = 'Z';
	int alnum5 = '!';
	alnum1 = ft_isalnum(alnum1);
	alnum2 = ft_isalnum(alnum2);
	alnum3 = ft_isalnum(alnum3);
	alnum4 = ft_isalnum(alnum4);
	alnum5 = ft_isalnum(alnum5);
	if (alnum1)
		printf("Alphanum %c : OK\n", alnum1);
	else
		printf("Alphanum %c : KO :(\n", alnum1);
	if (alnum2)
		printf("Alphanum %c : OK\n", alnum2);
	else
		printf("Alphanum %c : KO :(\n", alnum2);
	if (alnum3)
		printf("Alphanum %c : OK\n", alnum3);
	else
		printf("Alphanum %c : KO :(\n", alnum3);
	if (alnum4)
		printf("Alphanum %c : OK\n", alnum4);
	else
		printf("Alphanum %c : KO :(\n", alnum4);
	if (alnum5)
		printf("Alphanum %c : OK\n", alnum5);
	else
		printf("Alphanum %c : KO :(\n", alnum5);
	return(0);
}
*/
