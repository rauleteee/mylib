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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	counter;
	unsigned int	counter1;

	counter = ft_strlenMod(src);
	src[counter] = '\0';
	counter1 = ft_strlenMod(dest);
	if (size < counter1)
		return (-1);
	i = 0;
	while (i < size + 2)
	{
		dest[counter1++] = src[i++];
	}
	dest[size] = '\0';
	return (counter + 1);
}

int	ft_strlenMod(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i + 1);
}
