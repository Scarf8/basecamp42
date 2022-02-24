/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemuel- <elemuel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:24:54 by elemuel-          #+#    #+#             */
/*   Updated: 2022/02/16 01:40:06 by elemuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	ind;

	ind = 0;
	while (src[ind] && ind < n)
	{
		dest[ind] = src[ind];
		ind++;
	}
	while (ind < n)
	{
		dest[ind] = '\0';
		ind++;
	}
	return (dest);
}
