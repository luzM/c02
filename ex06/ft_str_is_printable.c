/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartiro <luz.martirosyan@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 01:29:34 by lmartiro          #+#    #+#             */
/*   Updated: 2026/10/21 14:34:26 by lmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	n;

	while (*str != '\0')
	{
		n = *str;
		if ((n < 32) || (n > 126))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	if(ft_str_is_printable("12d'\n'34"))
		write(1, "True", 4);
	else
		write(1, "False", 5);
	return (0);
}*/
