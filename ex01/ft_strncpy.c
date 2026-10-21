/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartiro <luz.martirosyan@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 00:39:24 by lmartiro          #+#    #+#             */
/*   Updated: 2026/10/21 14:32:49 by lmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			*start;

	start = dest;
	i = 0;
	while (i < n)
	{
		if (*src == '\0')
		{
			*dest = '\0';
		}
		else
		{
			*dest = *src;
			src++;
		}
		dest++;
		i++;
	}
	return (start);
}
/*
int	main(void)
{
	char	dest[8] = "XXXXXXX";
	char	*result;

	result = ft_strncpy(dest, "abc", 5);
	while (*result != '\0')
	{
		write(1, result, 1);
		result++;
	}
	return (0);
}*/
