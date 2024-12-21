/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migorteg <migorteg@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:38:24 by migorteg          #+#    #+#             */
/*   Updated: 2024/12/17 16:38:25 by migorteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	len;
	size_t	i;

	i = 0;
	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (i < len)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int main(void)
{
    char str[] = "Hola mundo";
    char *copy = ft_strdup(str);
    if (copy == NULL)
    {
        printf("Error: No se pudo duplicar la cadena.\n");
        return (1);
    }
    printf("Cadena original: %s\n", str);
    printf("Cadena duplicada: %s\n", copy);
    free(copy);
    return(0);
}
*/
