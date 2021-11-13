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

size_t	ft_strlenMod(char *str);
size_t	min(size_t a, size_t b);

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	counter1;

	i = 0;
	counter1 = ft_strlenMod(dest);
	if (size - 1 < counter1)
		return (size + (unsigned)ft_strlenMod(src));
	while (i < size)
	{
		dest[counter1++] = src[i++];
	}
	dest[size - 1] = '\0';
	return (ft_strlenMod(src) + counter1);
}

size_t	ft_strlenMod(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	min(size_t a, size_t b)
{
	if (a > b)
		return (b);
	return (a);
}
