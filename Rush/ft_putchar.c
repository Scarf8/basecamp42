/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarroqu <gmarroqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 00:58:49 by gmarroqu          #+#    #+#             */
/*   Updated: 2022/02/07 02:41:34 by gmarroqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_message(char msg[])
{
	int	count;

	count = 0;
	while (msg[count] != '\0')
	{
		ft_putchar(msg[count]);
		count += 1;
	}
	ft_putchar('\n');
}
