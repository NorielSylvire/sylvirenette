/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_mandatory.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:40:43 by fhongu            #+#    #+#             */
/*   Updated: 2023/11/11 00:54:55 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_MANDATORY_H
# define FT_PRINTF_MANDATORY_H
// @TODO PLEASE change these paths to something better ASAP!!
# include "../../testlib/testlib.h"
# include "/Users/fhongu/documents/repos/ft_printf/include/ft_printf.h"

# define run_test(conversion, test_name, ...) {\
		print_test_name(test_name);\
		expected_res = print_expected(conversion, __VA_ARGS__);\
		ft_putstr_fd("\nActual: ", 1);\
		actual_res = ft_printf(conversion, __VA_ARGS__);\
		ft_putstr_fd("\nActual return: ", 1);\
		ft_putnbr_fd(actual_res, 1);\
		compare((void *) &expected_res, (void *) &actual_res, sizeof (int));\
	}

void	tests_c(void);
void	test_s(void);

#endif