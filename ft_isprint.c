/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:10:01 by jazevedo          #+#    #+#             */
/*   Updated: 2023/11/01 14:51:06 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}
/*
Essa função verifica se o argumento passado como parâmetro (c)
é um caractere imprimível da tabela ASCII. Caso seja, retorna
um número diferente de zero, e, caso não seja, retorna zero.
*/
