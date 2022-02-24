/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemuel- <elemuel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:21:12 by elemuel-          #+#    #+#             */
/*   Updated: 2022/02/18 01:13:38 by elemuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] < s2[i])
			return (-1);
		else
			return (1);
	}
	return (0);
}

int    main()
{
    char    string_a[] = "abcde"; // altere à vontade
    char    string_b[] = "abcdE"; // altere à vontade
    int    orig;
    int    fake;

    fake = ft_strncmp(string_a, string_b, 5); // altere o último parâmetro (2) à vontade
    printf("Resultado fake: %d\n", fake);
    orig = strncmp(string_a, string_b, 5); // altere o último parâmetro (2) à vontade
    printf("Resultado orig: %d\n", orig);
}