/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbouma <jbouma@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 14:52:24 by jbouma        #+#    #+#                 */
/*   Updated: 2022/10/21 23:15:14 by jbouma        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * @brief The strlen() function computes the length of the string s.
 * The strnlen() function attempts to compute the length of s, but never scans
 * beyond the first maxlen bytes of s.
 * 
 * @param s 
 * @return size_t The strlen() function returns the number of characters
 * that precede the terminating NUL character.
 * The strnlen() function returns either the same result as strlen()
 * or maxlen, whichever is smaller.
 */
size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (*s++)
		length++;
	return (length);
}
