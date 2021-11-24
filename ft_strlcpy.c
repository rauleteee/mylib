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

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	counter1;
	size_t	fstLen;

	counter1 = 0;
	fstLen = ft_strlen(dest);
	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (counter1 < (size - 1) && src[i] != '\0')
	{
		dest[counter1++] = src[i++];
	}
	dest[counter1] = 0;
	return (ft_strlen(src));
}
