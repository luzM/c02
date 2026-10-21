/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartiro <luz.martirosyan@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 01:33:57 by lmartiro          #+#    #+#             */
/*   Updated: 2026/10/21 14:34:38 by lmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*start;

	start = str;
	while (*str != '\0')
	{
		if ((*str >= 'a') && (*str <= 'z'))
			*str = *str - 32;
		str++;
	}
	return (start);
}
/*
int	main(void)
{
	char	*result;
	char	str[] = "letters should be uppercase";

	result = ft_strupcase(str);
	while (*result != '\0')
	{
		write(1, result, 1);
		result++;
	}
	return (0);
}*/
