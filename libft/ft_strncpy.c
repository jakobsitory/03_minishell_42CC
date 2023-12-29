/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:47:41 by tzanchi           #+#    #+#             */
/*   Updated: 2023/11/13 11:00:43 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies n bytes of the string pointed to by src, including the
 * terminating null byte ('\0'), to the buffer pointed to by dest.  The strings
 * may not overlap, and the destination string dest must be large enough to
 * receive the copy.
 * 
 * @param dest The destination string
 * @param src The source string
 * @param n The number of bytes to copy
 * @return Pointer to dest 
 */
char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*return_value;

	return_value = dest;
	while (*src && n--)
		*dest++ = *src++;
	while (n--)
		*dest++ = '\0';
	return (return_value);
}
