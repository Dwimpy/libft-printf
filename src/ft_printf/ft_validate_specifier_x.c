/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_specifier_x.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 09:09:20 by arobu             #+#    #+#             */
/*   Updated: 2023/02/25 14:31:09 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_validate_specifier_x(t_fields *field)
{
	if (field -> flags.plus)
		field -> flags.plus = 0;
	if (field -> flags.space)
		field -> flags.space = 0;
	if (field -> flags.zero && field -> flags.minus)
		field -> flags.zero = 0;
	if (field -> flags.zero && field->precision.isprovided)
		field -> flags.zero = 0;
	return ;
}
