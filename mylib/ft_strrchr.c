/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:01:55 by rgimenez          #+#    #+#             */
/*   Updated: 2021/11/08 15:01:58 by rgimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_strlen(const char *str);

char	*ft_strrchr(const char *s, int c)
{
	int		count1;
	int	count;
	char	*aux;

	count1 = ft_strlen(s);
	count = 0;
	aux = (char *)s;
	while (count1 >= 0)
	{
		if (aux[count1] == c)
		{
			return (&aux[count1]);
		}
		count1--;
	}
	return (0);
}

int	ft_strlen(const	char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
} 