/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartiro <luz.martirosyan@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 04:24:42 by lmartiro          #+#    #+#             */
/*   Updated: 2026/10/22 04:48:27 by lmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char			*hex;
	unsigned char	i;

	hex = "0123456789abcdef";
	while (*str != '\0')
	{
		i = (unsigned char)*str;
		if (i < 32 || i > 126)
		{
			write(1, "\\", 1);
			write(1, &hex[i / 16], 1);
			write(1, &hex[i % 16], 1);
		}
		else
			write(1, str, 1);
		str++;
	}
}
/*
int	main(void)
{
	ft_putstr_non_printable("Hello\nWorld\t!");
	ft_putstr_non_printable("\n");
	ft_putstr_non_printable("\001\002\037\177");
	ft_putstr_non_printable("\n");
	ft_putstr_non_printable("Printable: ABC xyz 123 ~");
	return (0);
}*/
