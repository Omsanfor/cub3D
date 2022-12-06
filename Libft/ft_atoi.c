/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsanfor <omsanfor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:00:51 by omsanfor          #+#    #+#             */
/*   Updated: 2022/10/13 15:00:52 by omsanfor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned long	check_long(unsigned long number, int neg)
{
	if (number > 9223372036854775807)
	{
		if (neg == 1)
			return (0);
		else
			return (-1);
	}
	if (neg == 1)
		return (-number);
	else
		return (number);
}

int	ft_atoi(const char *str)
{
	int					i;
	int					neg;
	unsigned long		number;

	i = 0;
	neg = 0;
	number = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	if (str[i] == '-')
		neg = 1;
	if ((str[i] == '-') || (str[i] == '+'))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - 48);
		i++;
	}
	number = check_long(number, neg);
	return ((int)number);
}
