/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 08:29:44 by jaaaron           #+#    #+#             */
/*   Updated: 2018/11/13 09:50:58 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Takes as a parameter a link’s pointer address and frees the memory of the
** link’s content using the function del given as a parameter, then frees the
** link’s memory using free(3). The memory of next must not be freed under any
** circumstance. Finally, the pointer to the link that was just freed must be
** set to NULL (quite similar to the function ft_memdel in the mandatory part).
** Param #1 - The adress of a pointer to a link that needs to be freed.
** Return value - None.
** Libc functions free(3).
*/

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (alst == NULL || *alst == NULL)
		return ;
	if (del)
		del((*alst)->content, (*alst)->content_size);
	else
		return ;
	free(*alst);
	*alst = NULL;
}
