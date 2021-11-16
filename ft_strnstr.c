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

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
        unsigned int     c;

        c = 0;
        while ((s1[c] || s2[c]) && (c < n))
        {
			int r = ((unsigned char)s1[c] - (unsigned char)s2[c]);
			if (s1[c] != s2[c])
				return (r);
            c++;
        }
        return (0);
}

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	count;

	if (to_find[0] == '\0')
		return ((char *)str);
	i = 0;
	count = 0;
	while(ft_strncmp(str, to_find, n) == '0' && i < n)
	{
		if(str[i] == ' ')
			i++;
		if (to_find[count] == '\0')
			return ((char *)&str[i]);
		count++;
		i++;
	}
	return (0);
}
