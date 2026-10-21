/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartiro <luz.martirosyan@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 00:20:45 by lmartiro          #+#    #+#             */
/*   Updated: 2026/10/21 17:26:27 by lmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*dest_start;

	dest_start = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest_start);
}
/*
int	main(void)
{
	char	str[30];
	char	*result;

	result = ft_strcpy(str, "Text for copy");
	while (*result != '\0')
	{
		write(1, result, 1);
		result++;
	}
	return (0);
}*/
