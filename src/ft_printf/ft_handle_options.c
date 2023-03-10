/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_options.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:17:11 by arobu             #+#    #+#             */
/*   Updated: 2023/02/25 14:31:09 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_handle_options(t_fields *field, const char *format)
{
	size_t	count;

	count = 0;
	count += ft_get_flags(field, format + count + 1);
	count += ft_get_width(field, format + count + 1);
	count += ft_get_precision(field, format + count + 1);
	count += ft_get_specifier(field, format + count + 1);
	return (count);
}
