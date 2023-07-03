/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_builder_build.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:34:54 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2023/07/03 17:14:04 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_array_builder.h"

#include <stdlib.h>

#include "ft_common.h"

void	*ft_array_builder_build(t_ft_array_builder *self)
{
	void *const	result = malloc(self->item_size * self->length);

	if (!result)
		return (NULL);
	ft_common_memcpy(result, self->array, self->item_size * self->length);
	return (result);
}
