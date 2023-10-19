/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarikay <osarikay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 19:34:02 by osarikay          #+#    #+#             */
/*   Updated: 2023/10/13 19:59:02 by osarikay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	all_size;
	void	*all_mem;

	all_size = count * size;
	all_mem = malloc(all_size);
	if (all_mem != NULL)
		ft_bzero(all_mem, all_size);
	return (all_mem);
}

// int main()
// {
// 	size_t	eleman = 5;
// 	size_t	boyut = sizeof(int);
// 	int *dizi = (int *)ft_calloc(eleman, boyut);
// 	if (dizi != NULL)
// 	{
// 		for (size_t i = 0; i < eleman; i++)
// 	{
// 			printf("%d ", dizi[i]);
// 	}
//         free(dizi);
//     } else {
//         printf("Bellek tahsisi başarısız\n");
//     }
//     return 0;
// }
