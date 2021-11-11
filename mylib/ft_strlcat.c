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

int	ft_strlenMod(char *str);
int	min(int a, int b);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	counter1;

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

int	ft_strlenMod(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
int	min (int a, int b)
{
	if (a > b)
		return (b);
	return (a);
}
