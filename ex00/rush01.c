/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-azev <lde-azev@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 15:31:44 by lde-azev          #+#    #+#             */
/*   Updated: 2022/09/11 17:23:07 by lde-azev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_structure( int x, char firstchar, char midchar, char lastchar)
{
	ft_putchar(firstchar);
	while ((x - 1) > 1)
	{
		ft_putchar(midchar);
		x--;
	}
	if (x > 1)
		ft_putchar(lastchar);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		print_structure(x, '/', '*', '\\');
		y--;
		while (y > 1)
		{
			print_structure(x, '*', ' ', '*');
			y--;
		}
		if (y > 0)
			print_structure(x, '\\', '*', '/');
	}
}
