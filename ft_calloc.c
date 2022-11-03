/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbouma <jbouma@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/16 17:00:12 by jbouma        #+#    #+#                 */
/*   Updated: 2022/10/21 22:58:59 by jbouma        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h" 

/**
 * @brief The calloc() function contiguously allocates enough space for
 * count objects that are size bytes of memory each and returns a pointer to
 * the allocated memory. The allocated memory is filled with bytes of value zero.
 * 
 * @param count 
 * @param size 
 * @return void* If successful, calloc() return a pointer to allocated memory.
 * If there is an error, they return a NULL pointer and set errno to ENOMEM.
 */
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(size * count);
	if (!ptr)
		return (0);
	ft_bzero(ptr, size * count);
	return (ptr);
}
