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

int	ft_atoi(const char *str)
{
	int	i;
	long int	p;
	long int	res;

	i = 0;
	res = 1;
	p = 0;
	while (str[i] == 9 || str[i] == 10 || str[i] == 11
		|| str[i] == 12 || str[i] == 13 || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			res = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		p *= 10;
		p += ((int)str[i] - 48);
		i++;
	}
	return (res * p);
}
