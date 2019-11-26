/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 16:05:12 by cpieri            #+#    #+#             */
/*   Updated: 2019/11/26 11:09:26 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "malloc.h"

void	*calloc(size_t count, size_t size)
{
	void	*ptr;

	if ((ptr = malloc(count * size)) == NULL)
		return (NULL);
	ptr = ft_memset(ptr, 0, count * size);
	return (ptr);
}
