/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemuel- <elemuel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:24:06 by elemuel-          #+#    #+#             */
/*   Updated: 2022/02/07 22:19:04 by elemuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	a[3];

	a[0] = 48;
	a[1] = 49;
	a[2] = 50;
	while (a[0] <= '7')
	{
		while (a[1] <= '8')
		{
			while (a[2] <= '9')
			{
				write (1, a, 3);
				a[2]++;
				if (a[0] < '7')
					write(1, ", ", 2);
			}
		a[1]++;
		a[2] = a[1] + 1;
		}
	a[0]++;
	a[1] = a[0] + 1;
	a[2] = a[1] + 1;
	}
}
