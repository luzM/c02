/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartiro <luz.martirosyan@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 03:33:30 by lmartiro          #+#    #+#             */
/*   Updated: 2026/10/22 04:24:03 by lmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)

{
	unsigned int	i;
	unsigned int	length;

	i = 0;
	length = 0;
	while (src[length] != '\0')
	{
		if (i + 1 < size)
		{
			dest[i] = src[i];
			i++;
		}
		length++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (length);
}
/*
int	main (void)
{
	char			dest[10];
	unsigned int	length;

	length = ft_strlcpy(dest, "Hello", 10);
	printf("Full copy: \"%s\", length: %u\n", dest, length);

	length = ft_strlcpy(dest, "Hello", 4);
	printf("Truncated: \"%s\", length: %u\n", dest, length);

	length = ft_strlcpy(dest, "", 10);
	printf("Empty: \"%s\", length: %u\n", dest, length);

	length = ft_strlcpy(dest, "Hello", 1);
	printf("Size 1: \"%s\", length: %u\n", dest, length);

	dest[0] = 'X';
	length = ft_strlcpy(dest, "Hello", 0);
	printf("Size 0: first char '%c', length: %u\n", dest[0], length);
	return (0);
}*/
