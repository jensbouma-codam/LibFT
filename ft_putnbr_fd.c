/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbouma <jbouma@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/20 23:37:38 by jbouma        #+#    #+#                 */
/*   Updated: 2022/10/21 00:45:34 by jbouma        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <limits.h>

/**
 * @brief Outputs the integer ’n’ to the given file
 * descriptor.
 * 
 * @param n The integer to output.
 * @param fd The file descriptor on which to write.
 */

void	ft_putnbr_fd(int n, int fd)
{
	if (n == INT_MIN)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = n * -1;
		}
		if (n >= 10)
		{
			ft_putnbr_fd(n / 10, fd);
		}
		ft_putchar_fd(((n % 10) + '0'), fd);
	}
}

// void	ft_putnbr_fd(int n, int fd)
// {
// 	char		*str;
// 	long int	longn;

// 	longn = n;
// 	str = ft_itoa(longn);
// 	ft_putstr_fd((char *)str, fd);
// 	free(str);
// }
