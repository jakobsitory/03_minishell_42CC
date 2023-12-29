/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 18:12:57 by tzanchi           #+#    #+#             */
/*   Updated: 2023/08/15 16:17:47 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	update_base(char **str, int *base)
{
	if (*base == 0)
	{
		if (**str == '0')
		{
			(*str)++;
			if (**str == 'x' || **str == 'X')
			{
				*base = 16;
				(*str)++;
			}
			else
				*base = 8;
		}
		else
			*base = 10;
	}
}

unsigned int	ft_strtoui(char *str, int base)
{
	unsigned int	result;
	int				digit;

	result = 0;
	update_base(&str, &base);
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			digit = *str - '0';
		else if (*str >= 'a' && *str <= 'f')
			digit = *str - 'a' + 10;
		else if (*str >= 'A' && *str <= 'F')
			digit = *str - 'A' + 10;
		else
			break ;
		if (digit >= base)
			break ;
		result = result * base + digit;
		str++;
	}
	return (result);
}
