/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bit <BitSwapped@proton.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 10:43:46 by Bit               #+#    #+#             */
/*   Updated: 2026/06/16 10:44:49 by Bit              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_printable(char c)
{
	return ((c >= 32) && (c <= 126));
}

void	ft_puthex_digit(char c)
{
	if (c < 10)
	{
		ft_putchar('0' + c);
	}
	else
	{
		ft_putchar('a' - 10 + c);
	}
}

void	putchar_non_printable(char c)
{
	int	n;

	if (is_printable(c))
		ft_putchar(c);
	else
	{
		if (c < 0)
			n = c + 256;
		else
			n = c;
		ft_putchar('\\');
		ft_puthex_digit(n / 16);
		ft_puthex_digit(n % 16);
	}
}
