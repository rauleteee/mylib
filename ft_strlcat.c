/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:23:50 by rgimenez          #+#    #+#             */
/*   Updated: 2021/11/08 12:23:53 by rgimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	counter1;
	size_t	fstLen;

	counter1 = ft_strlen(dest);
	fstLen = ft_strlen(dest);
	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	if (ft_strlen(dest) < size - 1)
	{
		while (src[i] != '\0' && counter1 < (size - 1) && dest != src)
		{
			dest[counter1++] = src[i++];
		}
	}
	dest[counter1] = 0;
	return (fstLen + ft_strlen(src));
}
