/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarroqu <gmarroqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 23:59:47 by elemuel-          #+#    #+#             */
/*   Updated: 2022/02/07 02:49:02 by gmarroqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	print_message(char msg[]);

char	select_char(int x, int y, int px, int py)
{
	if (px == 0 && (py == 0 || py == (y - 1)))
	{
		return ('A');
	}
	if (px == (x - 1) && (py == 0 || py == (y - 1)))
	{
		return ('C');
	}
	if (px == 0 || py == 0 || px == (x - 1) || py == (y - 1))
	{
		return ('B');
	}	
	return (' ');
}

void	rush(int x, int y)
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
			px += 1;
		}
		px = 0;
		ft_putchar('\n');
		py += 1;
	}
	return ;
}
