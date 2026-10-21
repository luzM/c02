/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartiro <luz.martirosyan@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 01:40:22 by lmartiro          #+#    #+#             */
/*   Updated: 2026/10/21 14:34:57 by lmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*start;

	start = str;
	while (*str != '\0')
	{
		if ((*str >= 'A') && (*str <= 'Z'))
			*str = *str + 32;
		str++;
	}
	return (start);
}
/*
int	main(void)
{
	char	*result;
	char	str[] = "LETTERS SHOULD BE LOWCASE";

	result = ft_strlowcase(str);
	while (*result != '\0')
	{
		write(1, result, 1);
		result++;
	}
	return (0);
}*/
