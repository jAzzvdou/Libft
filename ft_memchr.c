/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:52:40 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/30 18:44:20 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*new_s;

	i = -1;
	new_s = (unsigned char *)s;
	while (n--)
		if (new_s[++i] == (unsigned char)c)
			return (&new_s[i]);
	return (NULL);
}
/*
Essa função verifica se existe um caractere N (c) dentro de uma
string N (s). Caso exista, retorna uma string de tamanho N (n)
após o caratere encontrado, e, caso não exista, retorna NULL.
*/
