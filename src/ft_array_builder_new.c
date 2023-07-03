/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_builder_new.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:33:59 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2023/07/03 16:34:34 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_array_builder.h"

#include <stdlib.h>

t_ft_array_builder	*ft_array_builder_new(size_t item_size)
{
	t_ft_array_builder *const	result
		= malloc(sizeof(t_ft_array_builder));

	if (!result)
		return (NULL);
	result->item_size = item_size;
	result->capacity = 0;
	result->length = 0;
	result->array = NULL;
	return (result);
}
