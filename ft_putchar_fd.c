/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbouma <jbouma@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/20 23:21:33 by jbouma        #+#    #+#                 */
/*   Updated: 2022/11/21 14:34:00 by jbouma        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * @brief Outputs the character ’c’ to the given file
 * descriptor.
 * 
 * @param c The character to output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
