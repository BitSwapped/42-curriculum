/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bit <BitSwapped@proton.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 19:11:19 by Bit               #+#    #+#             */
/*   Updated: 2026/06/17 19:11:19 by Bit              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[i])
		{
			while (to_find[j] && (str[i + j] == to_find[j]))
			{
				j++;
				if (to_find[j] == '\0')
					return (str + i);
			}
		}
		i++;
	}
	return (0);
}
