/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsanfor <omsanfor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:01:53 by omsanfor          #+#    #+#             */
/*   Updated: 2022/10/13 15:01:54 by omsanfor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*uc_src;
	unsigned char	stop;

	uc_src = (unsigned char *)src;
	stop = (char)c;
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = uc_src[i];
		if (uc_src[i] == stop)
			return (dst + (i + 1));
		i++;
	}
	return (0);
}
