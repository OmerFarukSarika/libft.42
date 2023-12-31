/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarikay <osarikay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 13:20:05 by osarikay          #+#    #+#             */
/*   Updated: 2023/10/21 15:59:54 by osarikay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*final;

	if (!s)
		return (NULL);
	i = 0;
	final = (char *)malloc(ft_strlen(s) + 1);
	if (!final)
		return (NULL);
	while (s[i])
	{
		final[i] = f(i, s[i]);
		i++;
	}
	final[i] = '\0';
	return (final);
}

// char	ft_42(unsigned int a, char c)
// {
// 	return (ft_tolower(c));
// }

// int	main(void)
// {
// 	char	s[] = "MeRhAbA";
// 	char	*final;

// 	final = ft_strmapi(s, ft_42);
// 	printf("%s", final);
// }
