/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartiro <luz.martirosyan@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 01:26:03 by lmartiro          #+#    #+#             */
/*   Updated: 2026/10/21 14:34:12 by lmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 'A') || (*str > 'Z'))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	if(ft_str_is_uppercase("ADEFCSV"))
		write(1, "True", 4);
	else
		write(1, "False", 5);
	return (0);
}*/
