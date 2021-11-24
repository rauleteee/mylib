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

size_t	ft_findneedle(char *s, const char *needle)
{
	size_t	i;

	i = 0;
	while (s[i] && needle[i])
	{
		if (s[i] != needle[i])
			return (-1);
		i++;
	}
	 return (i);
}

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	size;

	if (to_find[0] == '\0')
		return ((char *)str);
	size = ft_strlen(to_find);
	i = 0;
	while (n-- > 0)
	{
		if (to_find[0] == str[i])
		{
			if (ft_findneedle((char *)&str[i], to_find) == size)
				return ((char *)&str[i]);
		}
		i++;
	}
	return (0);
}
// int main(void)
// {
// 	char str[] = "lorem ipsum dolor sit amet ";
// 	char to_find[] = "ipsum";
// 	printf("Funcion original: %s\n", strnstr(str,to_find,30));
// 	printf("Funcion clonada: %s", ft_strnstr(str,to_find,30));
// }