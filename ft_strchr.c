/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarikay <osarikay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:19:52 by osarikay          #+#    #+#             */
/*   Updated: 2023/10/16 15:17:36 by osarikay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int i)
{
	while (*s != '\0' && (char)i != *s)
		s++;
	if ((char)i == *s)
		return ((char *)s);
	return (0);
}

//     int main()
// {
//     char str[] = "teste";
//     printf("%s", ft_strchr(str, 1024));
//     printf("%s", strchr(str, 1024));
// }
