/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_builder_types.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:32:47 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2023/07/03 16:33:40 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ARRAY_BUILDER_TYPES_H
# define FT_ARRAY_BUILDER_TYPES_H

# include <stddef.h>
# include <stdbool.h>

typedef bool	t_err;

typedef struct s_ft_array_builder
{
	size_t	item_size;
	size_t	capacity;
	size_t	length;
	void	*array;
}	t_ft_array_builder;

#endif
