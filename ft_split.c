/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarikay <osarikay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:37:39 by osarikay          #+#    #+#             */
/*   Updated: 2023/10/19 14:25:15 by osarikay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	len;
	char	*new;
	size_t	j;

	i = 0;
	len = 0;
	while (s[i])
	{
		while (s[i] != c)
			len++;
		i++;
	}
	new = (char *)malloc(len);
	while (s[i])
	{
		while (s[i] != c)
		{
			new[j] = s[i];
			i++;
			j++;
		}
		i++;
	}
	return (new);
}

int main(void)
{
	printf("%s", ft_split("mustafa omer", " "));
}
