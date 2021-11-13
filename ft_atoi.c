/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:49:12 by rgimenez          #+#    #+#             */
/*   Updated: 2021/11/08 12:54:04 by rgimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	result(const char *str);

int	ft_atoi(const char *str)
{
	return (result(str));
}

int	result(const char *str)
{
	int	i;
	int	p;
	int	res;
	int	counterMin;
	int	counterMas;

	i = 0;
	res = 1;
	p = 0;
	counterMas = 0;
	counterMin = 0;
	while (str[i] == 9 || str[i] == 10 || str[i] == 11
		|| str[i] == 12 || str[i] == 13 || str[i] == 32)
	{
		i++;
	}
	while (str[i] == '-')
	{
		counterMin++;
		i++;
		if (counterMin > 1)
			res = 0;
		else
			res = -1;
	}
	while (str[i] == '+')
	{
		counterMas++;
		i++;
		if (counterMas > 1)
			res = 0;
		else
			res = 1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		p *= 10;
		p += (str[i] - 48);
		i++;
	}
	return (res * p);
}
