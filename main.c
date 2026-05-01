/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nda-roch <nda-roch@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 19:29:43 by nda-roch          #+#    #+#             */
/*   Updated: 2026/05/01 20:08:48 by nda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int	real;
	int	mine;
	int	ptr_test;

	printf("--- %%c Test ---\n");
	real = printf("OG:   %c\n", 'A');
	mine = ft_printf("Mine: %c\n", 'A');
	printf("OG returned: %d | Mine returned: %d\n\n", real, mine);

	real = printf("OG:   %c\n", '\0');
	mine = ft_printf("Mine: %c\n", '\0');
	printf("OG returned: %d | Mine returned: %d\n\n", real, mine);

	printf("--- %%s Test ---\n");
	real = printf("OG:   %s\n", "hello");
	mine = ft_printf("Mine: %s\n", "hello");
	printf("OG returned: %d | Mine returned: %d\n\n", real, mine);

	real = printf("OG:   %s\n", NULL);
	mine = ft_printf("Mine: %s\n", NULL);
	printf("OG returned: %d | Mine returned: %d\n\n", real, mine);

	printf("--- %%p Test ---\n");
	real = printf("OG:   %p\n", &ptr_test);
	mine = ft_printf("Mine: %p\n", &ptr_test);
	printf("OG returned: %d | Mine returned: %d\n\n", real, mine);

	real = printf("OG:   %p\n", NULL);
	mine = ft_printf("Mine: %p\n", NULL);
	printf("OG returned: %d | Mine returned: %d\n\n", real, mine);

	printf("--- %%d Test ---\n");
	real = printf("OG:   %d\n", 42);
	mine = ft_printf("Mine: %d\n", 42);
	printf("OG returned: %d | Mine returned: %d\n\n", real, mine);

	real = printf("OG:   %d\n", INT_MIN);
	mine = ft_printf("Mine: %d\n", INT_MIN);
	printf("OG returned: %d | Mine returned: %d\n\n", real, mine);
	
	printf("--- %%i Test ---\n");
	real = printf("OG:   %i\n", 42);
	mine = ft_printf("Mine: %i\n", 42);
	printf("OG returned: %d | Mine returned: %d\n\n", real, mine);

	printf("--- %%u Test ---\n");
	real = printf("OG:   %u\n", 42);
	mine = ft_printf("Mine: %u\n", 42);
	printf("OG returned: %d | Mine returned: %d\n\n", real, mine);
	
	printf("--- %%x Test ---\n");
	real = printf("OG:   %x\n", 42);
	mine = ft_printf("Mine: %x\n", 42);
	printf("OG returned: %d | Mine returned: %d\n\n", real, mine);

	real = printf("OG:   %x\n", -1);
	mine = ft_printf("Mine: %x\n", -1);
	printf("OG returned: %d | Mine returned: %d\n\n", real, mine);

	printf("--- %%X Test ---\n");
	real = printf("OG:   %X\n", 42);
	mine = ft_printf("Mine: %X\n", 42);
	printf("OG returned: %d | Mine returned: %d\n\n", real, mine);

	printf("--- %% Test ---\n");
	real = printf("OG:   %%\n");
	mine = ft_printf("Mine: %%\n");
	printf("OG returned: %d | Mine returned: %d\n\n", real, mine);

	return (0);
}
