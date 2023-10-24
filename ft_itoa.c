/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarikay <osarikay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:23:05 by osarikay          #+#    #+#             */
/*   Updated: 2023/10/24 14:26:24 by osarikay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calc(int x)
{
	int	i;

	i = 1;
	while (x >= 10 || x <= -10)
	{
		x /= 10;
		i++;
	}
	return (i);
}

static int	num(int x)
{
	if (x > 0)
		return (calc(x));
	else if (x < 0)
		return (calc(-x) + 1);
	else
		return (1);
}

char	*ft_itoa(int n)
{
	char	*new;
	size_t	length;
	int		number;

	number = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	length = num(number);
	new = (char *)malloc((sizeof(char) * length) + 1);
	if (!new)
		return (NULL);
	new[length] = '\0';
	if (n < 0)
	{
		number *= -1;
	}
	while (length > 0)
	{
		new[--length] = number % 10 + '0';
		number /= 10;
	}
	if (n < 0)
		new[0] = '-';
	return (new);
}

// int	main(void)
// {
// 	int i = 0;
// 	int j = -1234;
// 	int k = -42;
// 	int l = 2147483647;
// 	int m = -2147483648;
// 	int	z = 1234;

// 	printf("The result of %d in itoa is: %s\n", i, ft_itoa(i));
// 	printf("The result of %d in itoa is: %s\n", j, ft_itoa(j));
// 	printf("The result of %d in itoa is: %s\n", k, ft_itoa(k));
// 	printf("The result of %d in itoa is: %s\n", l, ft_itoa(l));
// 	printf("The result of %d in itoa is: %s\n", m, ft_itoa(m));
// 	printf("The result of %d in itoa is: %s\n", z, ft_itoa(z));
// }