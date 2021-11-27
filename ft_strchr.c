/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:56:45 by rgimenez          #+#    #+#             */
/*   Updated: 2021/11/08 13:56:50 by rgimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	size_t		count1;
	char		*aux;

	count1 = 0;
	aux = (char *)s;
	if (c == 0)
		return (&s[ft_strlen(s)]);
	while (count1 <= ft_strlen(aux))
	{
		if ((unsigned char)aux[count1] == (unsigned char)c)
			return (&aux[count1]);
		count1++;
	}
	return (0);
}
