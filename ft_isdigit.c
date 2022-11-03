/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbouma <jbouma@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 12:49:40 by jbouma        #+#    #+#                 */
/*   Updated: 2022/10/21 23:03:10 by jbouma        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief  The isdigit() function tests for a decimal digit character.
 * 
 * @param c The value of the argument must be representable as an
 * unsigned char or the value of EOF.
 * @return int The function returns zero if the character tests false
 * and returns non-zero if the character tests true.
 */
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
