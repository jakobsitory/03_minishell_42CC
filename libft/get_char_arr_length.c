/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_char_arr_length.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:21:25 by tzanchi           #+#    #+#             */
/*   Updated: 2024/08/08 11:32:35 by jschott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * Calculates the length of an array of strings.
 * 
 * @param arr A pointer to the first element of an array of char pointers, which is null-terminated.
 * @return The number of strings in the array.
 */
size_t	get_char_arr_length(char **arr)
{
	size_t	length;

	length = 0;
	while (*arr)
	{
		length++;
		arr++;
	}
	return (length);
}
