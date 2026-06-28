/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bit <BitSwapped@proton.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 22:52:15 by Bit               #+#    #+#             */
/*   Updated: 2026/06/27 00:07:59 by Bit              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest;
	const unsigned char	*source;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		*(dest + i) = *(source + i);
		i++;
	}
	return (dest);
}
