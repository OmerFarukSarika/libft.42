/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarikay <osarikay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:29:37 by musacikg          #+#    #+#             */
/*   Updated: 2023/10/14 01:22:06 by osarikay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	while (dst[j] && j < size)
	{
		j++;
	}
	i = j;
	while (src[j - i] && j + 1 < size)
	{
		dst[j] = src[j - i];
		j++;
	}
	if (i < size)
		dst[j] = '\0';
	return (i + ft_strlen(src));
}

// int main()
// {
//     char dst[13] = "mustafa";
//     char src[5] = "fatih";
//     printf("%zu", ft_strlcat(dst, src, 3));
// }
