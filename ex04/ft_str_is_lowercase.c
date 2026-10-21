/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartiro <luz.martirosyan@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 01:23:03 by lmartiro          #+#    #+#             */
/*   Updated: 2026/10/21 14:33:36 by lmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 'a') || (*str > 'z'))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	if(ft_str_is_lowercase("daskdja"))
		write(1, "True", 4);
	else
		write(1, "False", 5);
	return (0);
}*/
