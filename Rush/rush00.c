/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarroqu <gmarroqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:16:38 by isantos-          #+#    #+#             */
/*   Updated: 2022/02/07 02:48:30 by gmarroqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	print_message(char msg[]);

char	select_char(int x, int y, int px, int py)
{
	if (
		(px == 0 && py == 0)
		|| (px == 0 && py == (y - 1))
		|| (px == (x - 1) && py == 0)
		|| (px == (x - 1) && py == (y - 1))
		)
	{
		return ('o');
	}
	if (px == 0 || px == (x - 1))
	{
		return ('|');
	}
	if (py == 0 || py == (y - 1))
	{
		return ('-');
	}
	return (' ');
}

void	rush(long int x, long int y)
{
	int		px;
	int		py;
	char	c;

	if(x > 2147483647 || y > 2147483647 || x <= 0 || y <= 0)
	{
		print_message("Numeros invalidos!");
		return ;
	}
	px = 0;
	py = 0;
	while (py < y)
	{
		while (px < x)
		{
			c = select_char(x, y, px, py);
			ft_putchar(c);
			px++;
		}
		ft_putchar('\n');
		px = 0;
		py++;
	}
	return ;
}
