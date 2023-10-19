/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarikay <osarikay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:32:51 by osarikay          #+#    #+#             */
/*   Updated: 2023/10/12 20:26:01 by osarikay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *x, int y, size_t z)
{
	size_t	i;

	i = 0;
	while (i < z)
	{
		((unsigned char *) x)[i] = y;
		i++;
	}
	return (x);
}

// int main()
// {
//     char src[] = "mustafa";
//     ft_memset(src, 48, 3);
//     printf("%s", src);
// }