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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_findneedle(char *s, char *needle)
{
	int	i;

	i = 0;
	 while (s[i] && needle[i])
	{
		if (s[i] != needle[i])
			return (-1);
		i++;
	}
	 return (i);
}

char	*ft_strnstr(char *str, char *to_find, int n)
{
	int	i;
	int	size;

	if (to_find[0] == '\0')
		return (str);
	size = ft_strlen(to_find);
	i = 0;
	while (i < n)
	{
		if (to_find[0] == str[i])
		{
			if (ft_findneedle(&str[i], to_find) == size)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
