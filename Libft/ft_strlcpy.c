/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsanfor <omsanfor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:02:39 by omsanfor          #+#    #+#             */
/*   Updated: 2022/10/13 15:02:40 by omsanfor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	i = 0;
	while (*(src + src_len) != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	while (*(src + i) != '\0' && i < (size - 1))
	{
		*(dst + i) = *((char *)src + i);
		i++;
	}
	*(dst + i) = '\0';
	return (src_len);
}
