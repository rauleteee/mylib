/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:06:05 by rgimenez          #+#    #+#             */
/*   Updated: 2021/11/08 12:06:07 by rgimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	count;

	if (to_find[0] == '\0')
		return ((char *)str);
	i = 0;
	count = 0;
	while (i < n)
	{
		if (to_find[count] == str[i])
			return ((char *)&str[i]);
		count++;
		i++;
	}
	return (0);
}
