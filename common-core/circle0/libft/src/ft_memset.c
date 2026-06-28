/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bit <BitSwapped@proton.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 20:59:49 by Bit               #+#    #+#             */
/*   Updated: 2026/06/26 21:39:32 by Bit              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*schar;

	schar = s;
	i = 0;
	while (i < n)
	{
		*schar++ = (unsigned char)c;
		i++;
	}
	return (s);
}
