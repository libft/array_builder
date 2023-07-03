/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_builder_free.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:16:05 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2023/07/03 17:16:14 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_array_builder.h"

#include <stdlib.h>

void	ft_array_builder_free(t_ft_array_builder *self)
{
	free(self->array);
	free(self);
}
