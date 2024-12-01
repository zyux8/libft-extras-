/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaker <ohaker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 18:01:06 by ohaker            #+#    #+#             */
/*   Updated: 2024/12/01 17:45:11 by ohaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_printf(const char *format, ...)
{
	int		x;
	int		y;
	va_list	args;

	x = 0;
	y = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			y += ft_def_format(*format, args, 0);
		}
		else
		{
			ft_putchar(*format);
			y++;
		}
		format++;
	}
	va_end(args);
	return (y);
}

// void	rehkampf(char *mo, char *reh)
// {
// 	int		gender;
// 	void	aufmerksam;
// 	int		geweih;

// 	if (reh[aufmerksamkeit] == false)
// 		return (sieg_mo);
// 	else
// 	{
// 		if (reh[gender] == weiblich)
// 			return (sieg_mo);
// 		else if (reh[gender] == maennlich)
// 		{
// 			if (reh[geweih] == true)
// 				return (sieg_reh);
// 			else
// 				return (sieg_mo);
// 		}
// 	}
// }