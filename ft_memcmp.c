/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:08:24 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/20 18:13:09 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*new_s1;
	const char	*new_s2;

	new_s1 = (char *)s1;
	new_s2 = (char *)s2;
	i = -1;
	while (++i != n)
		if (new_s1[i] != new_s2[i])
			return (new_s1[i] - new_s2[i]);
	return (0);
}
