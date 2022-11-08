/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbouma <jbouma@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 14:52:24 by jbouma        #+#    #+#                 */
/*   Updated: 2022/11/08 17:19:28 by jbouma        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * @brief The strlen() function computes the lenght of the string s.
 * The strnlen() function attempts to compute the len of s, but never scans
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
	size_t	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}
