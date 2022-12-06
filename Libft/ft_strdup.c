/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsanfor <omsanfor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:02:28 by omsanfor          #+#    #+#             */
/*   Updated: 2022/10/13 15:02:29 by omsanfor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_p;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (s[len])
		len++;
	s_p = (char *)malloc(sizeof(char) * (len + 1));
	if (s_p == NULL)
		return (NULL);
	while (s[i])
	{
		s_p[i] = s[i];
		i++;
	}
	s_p[i] = '\0';
	return (s_p);
}
