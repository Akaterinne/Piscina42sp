/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:24:28 by akaterin          #+#    #+#             */
/*   Updated: 2023/09/03 17:47:11 by akaterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_strlen(const char *str);

const char	*numbertoword(int number);

int	dictionaryconversion(int number)
{
	const char	*numbers[] =
	{
		"zero", "one", "two", "three", "four", "five",
		"six", "seven", "eight", "nine",
		"ten", "eleven", "twelve", "thirteen",
		"fourteen", "fifteen", "sixteen", "seventeen",
		"eighteen", "nineteen", "twenty"
	};
	if (number < 0 || number > 20)
	{
		write(2, "Error\n", 6);
		return (-1);
	}
	write(1, numbers[number], ft_strlen(numbers[number]));
	write(1, "\n", 1);
	return (0);
}
