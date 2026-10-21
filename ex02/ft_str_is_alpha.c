/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartiro <luz.martirosyan@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 01:00:06 by lmartiro          #+#    #+#             */
/*   Updated: 2026/10/21 14:33:04 by lmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (((*str < 'A') || (*str > 'Z')) && ((*str < 'a') || (*str > 'z')))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	if (ft_str_is_alpha("Hello"))
		write(1, "True", 4);
	else
		write(1, "False", 5);
	return (0);
}*/
