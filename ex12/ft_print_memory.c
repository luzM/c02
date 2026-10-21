/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 14:36:35 by lmartiro          #+#    #+#             */
/*   Updated: 2026/10/21 17:24:25 by lmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_addr(unsigned long addr)
{
	char	*hex;
	char	result[16];
	int		i;

	hex = "0123456789abcdef";
	i = 0;
	while (i < 16)
	{
		result[15 - i] = hex[addr % 16];
		addr = addr / 16;
		i++;
	}
	write(1, result, 16);
	write(1, ": ", 2);
}

void	ft_print_characters(unsigned char n)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, &hex[n / 16], 1);
	write(1, &hex[n % 16], 1);
}

void	ft_write_hexadecimal(unsigned char *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < 16)
	{
		if (i < size)
			ft_print_characters(addr[i]);
		else
			write(1, "  ", 2);
		i++;
		if (i % 2 == 0)
			write(1, " ", 1);
	}
}

void	ft_write_content(unsigned char *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while ((i < size) && (i < 16))
	{
		if ((*addr >= 32) && (*addr <= 126))
			write(1, addr, 1);
		else
			write(1, ".", 1);
		addr++;
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*ptr;

	i = 0;
	ptr = addr;
	while (i < size)
	{
		ft_write_addr((unsigned long)(ptr + i));
		ft_write_hexadecimal(ptr + i, size - i);
		ft_write_content(ptr + i, size);
		i += 16;
		write(1, "\n", 1);
	}
	return (ptr);
}
/*
int	main(void)
{
	char	str[] = "Bonjour les aminches\t\n\tc\a est fou"
        "\ttout\tce qu on peut faire avec\t\n\t"
        "print_memory\n\n\n\tlol.lol\n ";
	ft_print_memory(str, sizeof(str));
	return (0);
}*/
