/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsanfor <omsanfor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:02:33 by omsanfor          #+#    #+#             */
/*   Updated: 2022/10/13 15:02:34 by omsanfor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*conc;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	conc = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!conc)
		return (NULL);
	ft_strlcpy (conc, s1, s1_len + 1);
	ft_strlcat (conc + s1_len, s2, s2_len + 1);
	return (conc);
}
