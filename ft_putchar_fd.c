/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migorteg <migorteg@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 19:40:03 by migorteg          #+#    #+#             */
/*   Updated: 2024/12/17 19:40:07 by migorteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	ft_putchar_fd('A', 1);
	ft_putchar_fd('B', 1);

//To print in a file, "open" to open/create (#include <fcntl.h>)
	int fd = open("output.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);
	if (fd != -1)
	{
		ft_putchar_fd('C', fd);  // Write 'C' in file "output.txt"
		close(fd);  // Close file
	}
	return (0);
}
*/
