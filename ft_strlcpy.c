/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:41:47 by rgimenez          #+#    #+#             */
/*   Updated: 2021/11/08 12:41:49 by rgimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strncpy(char *dest, char *src, size_t n);

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	length;
	size_t	n;

	length = 0;
	if (size <= 0)
		return (0);
	n = ft_strncpy(dest, src, size);
	dest[size] = '\0';
	return (n);
}

size_t	ft_strncpy(char *dest, char *src, size_t n)
{
	size_t	c;

	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[n] = '\0';
	return (c);
}
