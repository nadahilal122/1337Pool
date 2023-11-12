/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhilal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 01:59:54 by nhilal            #+#    #+#             */
/*   Updated: 2023/08/30 22:59:29 by nhilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	r;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		r = 1;
	else
		r = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (r);
}
