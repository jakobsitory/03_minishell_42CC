/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_char_arr_length.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:21:25 by tzanchi           #+#    #+#             */
/*   Updated: 2023/09/12 17:22:23 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
