/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bit <BitSwapped@proton.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 03:08:19 by Bit               #+#    #+#             */
/*   Updated: 2026/06/28 03:31:06 by Bit              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*block;

	block = malloc(count * size);
	if (!block)
		return (NULL);
	ft_bzero(block, count * size);
	return (block);
}
