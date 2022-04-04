/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdemir <berdemir@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:50:57 by berdemir          #+#    #+#             */
/*   Updated: 2022/04/04 16:38:33 by berdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;
	int	j;

	i = 0;
	j = n;
	while (i < j && src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < j)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
