/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bit <BitSwapped@proton.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 23:08:38 by Bit               #+#    #+#             */
/*   Updated: 2026/06/14 23:09:06 by Bit              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_next_combn(int *arr, int col, int n)
{
	int	i;

	while (col)
	{
		while (arr[col] == (9 + col - (n - 1)) && col >= 0)
			col -= 1;
		if (col < 0)
			break ;
		arr[col] += 1;
		i = col;
		while (++i < n)
			arr[i] = arr[i - 1] + 1;
		col = n - 1;
		ft_putchar(',');
		ft_putchar(' ');
		i = 0;
		while (i < n)
			ft_putchar(arr[i++] + '0');
	}
}

void	ft_print_combn(int n)
{
	int	arr[9];
	int	i;
	int	col;

	col = n - 1;
	i = 0;
	if (n <= 9)
	{
		while (i < n)
		{
			arr[i] = i;
			i++;
		}
		i = 0;
		while (i < n)
			ft_putchar(arr[i++] + '0');
		ft_next_combn(arr, col, n);
		ft_putchar('\n');
	}
}
