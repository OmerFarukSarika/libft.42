/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarikay <osarikay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:26:56 by osarikay          #+#    #+#             */
/*   Updated: 2023/10/12 20:39:17 by osarikay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(char c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || \
		(c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}