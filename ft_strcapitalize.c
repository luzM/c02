/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartiro <luz.martirosyan@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 01:44:41 by lmartiro          #+#    #+#             */
/*   Updated: 2026/10/20 02:54:51 by lmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_not_alphanumeric(char c)
{
	if ((c >= '0') && (c <= '9'))
		return (0);
	else if ((c >= 'a') && (c <= 'z'))
		return (0);
	else if ((c >= 'A') && (c <= 'Z'))
		return (0);
	else
		return (1);
}

char	*make_word_capitalize(char *str)
{
	int		i;

	i = 1;
	while (!is_not_alphanumeric(*str))
	{
		if (i)
		{
			if ((*str >= 'a') && (*str <= 'z'))
				*str = *str - 32;
			i = 0;
		}
		else
		{
			if ((*str >= 'A') && (*str <= 'Z'))
				*str = *str + 32;
		}
		str++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	char	*start;

	start = str;
	while (*str != '\0')
	{
		str = make_word_capitalize(str);
		if (*str != '\0')
			str++;
	}
	return (start);
}
