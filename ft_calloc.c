/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migorteg <migorteg@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:36:30 by migorteg          #+#    #+#             */
/*   Updated: 2024/12/17 16:36:32 by migorteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr_aux;
	void			*ptr;
	size_t			i;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	ptr_aux = (unsigned char *)ptr;
	while (i < (nmemb * size))
	{
		ptr_aux[i] = 0;
		i++;
	}
	return (ptr);
}
/*
int main(void)
{
    size_t n_elem = 5;
    size_t size_elem = sizeof(char);
    char *pointer;

    pointer = (char *)ft_calloc(n_elem, size_elem);    
    if (pointer == NULL)
    {
        printf("Error allocating memory\n");
        return 1;
    }
    printf("Pointer after ft_calloc:\n");
	printf("pointer[0] = %d\n", pointer[0]);
    printf("pointer[1] = %d\n", pointer[1]);
    printf("pointer[2] = %d\n", pointer[2]);
    printf("pointer[3] = %d\n", pointer[3]);
    printf("pointer[4] = %d\n", pointer[4]);
    free(pointer);
    return (0);
}
*/
