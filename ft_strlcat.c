/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:57:14 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/31 11:40:58 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_size;

	if (size == 0)
		return (ft_strlen(src));
	dst_size = ft_strlen(dst);
	if (size == 0 || size <= dst_size)
		return (size + ft_strlen(src));
	size -= 1;
	i = -1;
	while (src[++i] && dst_size + i < size)
		dst[dst_size + i] = src[i];
	dst[dst_size + i] = '\0';
	return (dst_size + ft_strlen(src));
}
/*
Essa função vai concatenar N caracteres (size) de uma string X (src)
em uma string Y (dst) e retornar a soma do tamanho das strings. Caso
o retorno tenha um valor diferente da soma das strings, então houve
algum erro durante a concatenação.
*/
