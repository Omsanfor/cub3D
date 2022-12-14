/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsanfor <omsanfor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:01:13 by omsanfor          #+#    #+#             */
/*   Updated: 2022/10/13 15:01:14 by omsanfor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_itoa(int n, int count, char *ret)
{
	char	a;

	ret[count] = '\0';
	if (n < 0)
	{
		if (n == -2147483648)
		{
			count--;
			ret[count] = '8';
			n = -214748364;
		}
		n *= -1;
		ret[0] = '-';
	}
	if (n == 0)
		ret[0] = '0';
	while (n > 0)
	{
		a = n % 10 + '0';
		ret[count - 1] = a;
		n /= 10;
		count--;
	}
}

static int	ft_itoa_count(int n)
{
	int		t;

	t = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
		t = 1;
	while (n != 0)
	{
		n /= 10;
		t++;
	}
	return (t);
}

char	*ft_itoa(int n)
{
	char	*ret;
	int		count;

	count = ft_itoa_count(n);
	ret = (char *)malloc(sizeof(char) * (count + 1));
	if (ret == 0)
		return (NULL);
	ft_putnbr_itoa(n, count, ret);
	return (ret);
}
