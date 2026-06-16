/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bit <BitSwapped@proton.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 09:32:39 by Bit               #+#    #+#             */
/*   Updated: 2026/06/16 09:54:55 by Bit              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_alpha(char str)
{
	if ((str < 'A' || str > 'Z') && (str < 'a' || str > 'z'))
		return (0);
	return (1);
}

int	is_numeric(char str)
{
	if (str < '0' || str > '9')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i])
	{
		if (is_alpha(str[i]))
		{
			if (str[i] >= 'a' && str[i] <= 'z' && new_word)
				str[i] -= 32;
			new_word = 0;
		}
		else if (is_numeric(str[i]))
			new_word = 0;
		else
			new_word = 1;
		i++;
	}
	return (str);
}
