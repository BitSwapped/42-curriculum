/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bit <BitSwapped@proton.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 03:31:10 by Bit               #+#    #+#             */
/*   Updated: 2026/06/28 03:31:10 by Bit              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*dest;
	const unsigned char	*source;

	i = 0;
	dest = (unsigned char *)dst;
	source = (const unsigned char *)src;
	while (i < n && source[i] != (unsigned char)c)
	{
		*(dest + i) = *(source + i);
		i++;
	}
	if (i < n)
	{
		*(dest + i) = *(source + i);
		return (dest + i + 1);
	}
	return (NULL);
}
