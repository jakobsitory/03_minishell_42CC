/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:50:16 by tzanchi           #+#    #+#             */
/*   Updated: 2023/11/13 19:28:10 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Get the length of the final string after concatenation
 * 
 * @param n Number of strings to concatenate
 * @param ap Variadic list
 * @return Total length of the concatenated string
 */
static size_t	get_final_length(size_t n, va_list ap)
{
	va_list	ap_copy;
	size_t	i;
	size_t	length;

	va_copy(ap_copy, ap);
	i = 0;
	length = 0;
	while (i++ < n)
		length += ft_strlen(va_arg(ap_copy, char *));
	va_end(ap_copy);
	return (length);
}

/**
 * @brief Adds the string src in the string dest, without NULL-terminating it
 * 
 * @param dest Destination string
 * @param src Source string
 * @return The number of characters copied
 */
static size_t	add_string(char *dest, char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (i);
}

/**
 * @brief Allocates memory and concatenates n strings
 * 
 * @param n The number of strings to concatenate
 * @param ... All the strings to concatenate
 * @return Pointer to the newly created string
 */
char	*ft_concat(size_t n, ...)
{
	va_list	ap;
	size_t	final_length;
	size_t	i;
	size_t	j;
	char	*concat;

	va_start(ap, n);
	final_length = get_final_length(n, ap);
	concat = malloc((final_length + 1) * sizeof(char));
	if (!concat)
		return (NULL);
	i = 0;
	j = 0;
	while (i++ < n)
		j += add_string(&concat[j], va_arg(ap, char *));
	va_end(ap);
	concat[j] = '\0';
	return (concat);
}
