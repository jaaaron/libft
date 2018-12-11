/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:11:30 by jaaaron           #+#    #+#             */
/*   Updated: 2018/11/06 15:42:04 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Lexicographical comparison between s1 and s2. If the 2 strings are identical
** the function returns 1, or 0 otherwise.
** Param #1 - The first string to be compared.
** Param #2 - The second string to be compared.
*/

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (0);
	return (ft_strcmp(s1, s2) ? 0 : 1);
}
