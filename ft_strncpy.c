/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartiro <luz.martirosyan@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 00:39:24 by lmartiro          #+#    #+#             */
/*   Updated: 2026/10/20 00:51:50 by lmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			*start;

	start = dest;
	i = 0;
	while (i < n)
	{
		if (*src == '\0')
		{
			*dest = '\0';
		}
		else
		{
			*dest = *src;
			src++;
		}
		dest++;
		i++;
	}
	return (start);
}
