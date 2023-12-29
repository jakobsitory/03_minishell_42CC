/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_and_set_to_null.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:38:38 by tzanchi           #+#    #+#             */
/*   Updated: 2023/11/21 12:47:08 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief If not NULL, free and set to NULL all the pointers passed to the
 * function
 * 
 * @param n The number of pointers
 * @param ... All the pointers 
 */
void	free_and_set_to_null(size_t n, ...)
{
	va_list	ap;
	size_t	i;
	void	*ptr;

	va_start(ap, n);
	i = 0;
	while (i++ < n)
	{
		ptr = va_arg(ap, void *);
		if (ptr)
		{
			free(ptr);
			ptr = NULL;
		}
	}
	va_end(ap);
}
