/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhilal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:29:54 by nhilal            #+#    #+#             */
/*   Updated: 2023/08/16 20:45:32 by nhilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	b;
	int	a;

	a = 0;
	while (a <= 98)
	{
	b = a + 1;
		while (b <= 99)
		{
			ft_putchar (a / 10 + 48);
			ft_putchar (a % 10 + 48);
			write(1, " ", 1);
			ft_putchar (b / 10 + 48);
			ft_putchar (b % 10 + 48);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
