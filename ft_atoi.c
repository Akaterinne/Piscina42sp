/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:28:13 by akaterin          #+#    #+#             */
/*   Updated: 2023/09/06 14:04:27 by akaterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	whitespace(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
	{
		i++;
	}
	return (i);
}

int	convert(char *str, int sign)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	i;
	int	count;

	sign = 1;
	count = 0;
	i = whitespace(str);
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	if (count % 2 != 0)
	{
		sign = -1;
	}
	return (convert(&str[i], sign));
}
