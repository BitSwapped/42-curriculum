/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bit <BitSwapped@proton.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 14:07:33 by Bit               #+#    #+#             */
/*   Updated: 2026/06/27 19:20:04 by Bit              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*schar;
	size_t			i;

	schar = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (schar[i] == (unsigned char)c)
			return ((void *)(schar + i));
		i++;
	}
	return (NULL);
}
