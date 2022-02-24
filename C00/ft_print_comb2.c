/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemuel- <elemuel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 22:19:39 by elemuel-          #+#    #+#             */
/*   Updated: 2022/02/08 16:56:10 by elemuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	ft_print_comb3(int a, int b);

void	ft_print_comb3(int a, int b)
{
	char	number[5];

	number[2] = ' ';
	number[0] = a / 10 + 48;
	number[1] = a % 10 + 48;
	number[3] = b / 10 + 48;
	number[4] = b % 10 + 48;
	write(1, number, 5);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a;
		while (b <= 99)
		{
			if (b != a)
			{
				ft_print_comb3(a, b);
				if (!(a == 98 && b == 99))
				{
					write(1, ", ", 2);
				}
			}
			b += 1;
		}
		a += 1;
	}
}
