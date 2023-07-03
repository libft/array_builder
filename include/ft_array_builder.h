/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_builder.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:28:23 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2023/07/03 17:16:29 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ARRAY_BUILDER_H
# define FT_ARRAY_BUILDER_H

# include "ft_array_builder_types.h"

t_ft_array_builder	*ft_array_builder_new(
						size_t item_size);
void				ft_array_builder_free(
						t_ft_array_builder *self);
t_err				ft_array_builder_append(
						t_ft_array_builder *self,
						size_t length,
						const void *buf);
void				*ft_array_builder_build(
						t_ft_array_builder *self);

#endif
