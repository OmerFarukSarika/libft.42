/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarikay <osarikay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:37:27 by osarikay          #+#    #+#             */
/*   Updated: 2023/10/22 01:37:32 by osarikay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}

// #include <stdio.h>

// void	ft_42(unsigned int x, char *c)
// {
// 	*c = ft_toupper(*c);
// }
// int main()
// {
// 	char str[] = "DENİZ";
// 	ft_striteri(str, ft_42);
// 	printf("%s", str);
// }