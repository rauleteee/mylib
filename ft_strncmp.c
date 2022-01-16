/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:02:41 by rgimenez          #+#    #+#             */
/*   Updated: 2021/11/08 12:02:48 by rgimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	c;
	int				r;
	
	c = 0;
	while ((s1[c] || s2[c]) && (c < n))
	{
		r = ((unsigned char)s1[c] - (unsigned char)s2[c]);
		if ((unsigned char)s1[c] != (unsigned char)s2[c])
			return (r);
		c++;
	}
	return (0);
}
