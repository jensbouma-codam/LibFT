/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbouma <jbouma@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/16 13:17:43 by jbouma        #+#    #+#                 */
/*   Updated: 2022/10/21 23:16:20 by jbouma        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * @brief The strcmp() and strncmp() functions lexicographically compare
 * the null-terminated strings s1 and s2.The strncmp() function compares not
 * more than n characters.
 * Because strncmp() is designed for comparing strings rather than binary data,
 * characters that appear after a `\0' character are not compared.
 * 
 * @param s1 
 * @param s2 
 * @param n 
 * @return int The strcmp() and strncmp() functions return an integer greater
 * than, equal to, or less than 0, according as the string s1 is greater than,
 * equal to, or less than the string s2.
 * The comparison is done using unsigned characters,
 * so that `\200' is greater than `\0'.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)*s1 != (unsigned char)*s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		if (!*s1 || !*s2)
			return (0);
		s1++;
		s2++;
		i++;
	}
	return (0);
}
