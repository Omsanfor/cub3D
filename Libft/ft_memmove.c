/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsanfor <omsanfor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:02:04 by omsanfor          #+#    #+#             */
/*   Updated: 2022/10/13 15:02:05 by omsanfor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (src == NULL && dest == NULL)
		return (NULL);
	if (src < dest)
	{
		while (n--)
		{
			*(unsigned char *)(dest + n) = *(unsigned char *)(src + n);
		}
	}
	else if (src > dest)
		ft_memcpy (dest, src, n);
	return (dest);
}
