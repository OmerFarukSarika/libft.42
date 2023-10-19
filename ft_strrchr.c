/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarikay <osarikay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:08:35 by osarikay          #+#    #+#             */
/*   Updated: 2023/10/12 20:37:46 by osarikay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen((char *)str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
		{
			return (((char *)str) + i);
		}
		i--;
	}
	return (0);
}

// int main()
// {
//     char str[256] = "bonjour";
//     printf("%s", ft_strrchr(str + 2, 'b'));
// }