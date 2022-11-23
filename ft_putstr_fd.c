/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbouma <jbouma@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/20 23:25:41 by jbouma        #+#    #+#                 */
/*   Updated: 2022/11/21 15:23:57 by jbouma        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/**
 * @brief Outputs the string ’s’ to the given file
 * descriptor
 * 
 * @param s The string to output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putstr_fd(char *s, int fd)
{
	write(fd, (char *)s, ft_strlen(s));
}
