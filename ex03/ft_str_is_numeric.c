/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartiro <luz.martirosyan@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 01:18:11 by lmartiro          #+#    #+#             */
/*   Updated: 2026/10/21 14:33:19 by lmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if ((*str < '0') || (*str > '9'))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	if(ft_str_is_numeric("12d3456"))
		write(1, "True", 4);
	else
		write(1, "False", 5);
	return (0);
}*/
