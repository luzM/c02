/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartiro <luz.martirosyan@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 01:44:41 by lmartiro          #+#    #+#             */
/*   Updated: 2026/10/21 14:46:14 by lmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		new_word;
	char	*start;

	new_word = 1;
	start = str;
	while (*str != '\0')
	{
		if (((*str >= 'a') && (*str <= 'z')) || ((*str >= 'A') && (*str <= 'Z'))
			|| ((*str >= '0') && (*str <= '9')))
		{
			if (new_word && (*str >= 'a') && (*str <= 'z'))
				*str = *str - 32;
			else if ((*str >= 'A') && (*str <= 'Z') && !new_word)
				*str = *str + 32;
			new_word = 0;
		}
		else
			new_word = 1;
		str++;
	}
	return (start);
}
/*
int	main(void)
{
	char	text[] = "hi, how are you? 42words forty-two; fifty+and+one";
	char	*result;

	result = ft_strcapitalize(text);
	printf("%s", text);
}*/
