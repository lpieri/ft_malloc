/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 11:28:16 by cpieri            #+#    #+#             */
/*   Updated: 2019/10/31 15:28:48 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MALLOC_H
# define MALLOC_H

/*
**	Includes
*/

# include "malloc_core.h"

/*
**	Macros General
*/


/*
**	Structures
*/
// typedef struct			s_block_meta
// {
// 	size_t				size;
// 	int					is_free;
// 	struct block_meta	*next;
// }						t_block_meta;

/*
**	Defination of functions: LibMalloc
*/
void					free(void *ptr);
void					show_alloc_mem(void);
void					*malloc(size_t size);
void					*realloc(void *ptr, size_t size);

#endif
