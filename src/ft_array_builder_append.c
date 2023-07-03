/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_builder_append.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:15:12 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2023/07/03 17:15:33 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_array_builder.h"

#include <stdlib.h>

#include "ft_common.h"

static size_t	size_t_max(size_t a, size_t b)
{
	if (a < b)
		return (b);
	else
		return (a);
}

static t_err	resize(t_ft_array_builder *self, size_t minimum)
{
	const size_t	new_capacity = size_t_max(minimum, self->capacity * 2);
	void *const		new_array = malloc(self->item_size * new_capacity);

	if (!new_array)
		return (true);
	ft_common_memcpy(new_array, self->array, self->item_size * self->length);
	free(self->array);
	self->array = new_array;
	self->capacity = new_capacity;
	return (false);
}

t_err	ft_array_builder_append(
	t_ft_array_builder *self,
	size_t length,
	const void *buf
)
{
	if (self->capacity - self->length < length
		&& resize(self, self->length + length))
		return (true);
	ft_common_memcpy(
		&((char *)self->array)[self->item_size * self->length],
		buf,
		self->item_size * length);
	self->length += length;
	return (false);
}
