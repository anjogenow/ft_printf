/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenow <agenow@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:27:31 by agenow            #+#    #+#             */
/*   Updated: 2024/05/21 15:52:33 by agenow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Let the edging commence

#include "inc/ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main()
{
	// c for chars
	ft_printf("\nTest %%c\nThis thing %d long, should be %d\n", ft_printf("%c", 'y'), printf("%c", 'y'));

	// s for strings
	ft_printf("\nTest %%s\nThis thing %d long, should be %d\n", ft_printf("%s", "YMCA"), printf("%s", "YMCA"));

	// p for pointers 
	ft_printf("\nTest %%p\nThis thing %d long, should be %d\n", ft_printf("%p", "YMCA"), printf("%p", "YMCA"));

	// d & i for ints
	ft_printf("\nTest %%d\nThis thing %d long, should be %d\n", ft_printf("%d", -424242), printf("%d", -424242));
	ft_printf("\nTest %%i\nThis thing %d long, should be %d\n", ft_printf("%i", -424242), printf("%i", -424242));

	// u for unsigned ints
	ft_printf("\nTest %%u\nThis thing %d long, should be %d\n", ft_printf("%u", 424242), printf("%u", 424242));

	// x & X for hexadecimal
	ft_printf("\nTest %%x\nThis thing %d long, should be %d\n", ft_printf("%x", 424242), printf("%x", 424242));
	ft_printf("\nTest %%X\nThis thing %d long, should be %d\n", ft_printf("%X", 424242), printf("%X", 424242));
	ft_printf("\nTest %%x\nThis thing %d long, should be %d\n", ft_printf("%x", -424242), printf("%x", -424242));
	ft_printf("\nTest %%X\nThis thing %d long, should be %d\n", ft_printf("%X", -424242), printf("%X", -424242));

	// test with %
	ft_printf("\nTest %%\nThis thing %d long, should be %d\n", ft_printf("%"), printf("%"));
	ft_printf("\nTest %%%%%%\nThis thing %d long, should be %d\n", ft_printf("%%%"), printf("%%%"));

	// test with 0
	ft_printf("\nNow the same with 0 as value\n");

	// c for chars
	ft_printf("\nTest %%c\nThis thing %d long, should be %d\n", ft_printf("%c", 0), printf("%c", 0));

	// s for strings
	ft_printf("\nTest %%s\nThis thing %d long, should be %d\n", ft_printf("%s", 0), printf("%s", 0));

	// p for pointers 
	ft_printf("\nTest %%p\nThis thing %d long, should be %d\n", ft_printf("%p", 0), printf("%p", 0));

	// d & i for ints
	ft_printf("\nTest %%d\nThis thing %d long, should be %d\n", ft_printf("%d", 0), printf("%d", 0));
	ft_printf("\nTest %%i\nThis thing %d long, should be %d\n", ft_printf("%i", 0), printf("%i", 0));

	// u for unsigned ints
	ft_printf("\nTest %%u\nThis thing %d long, should be %d\n", ft_printf("%u", 0), printf("%u", 0));

	// x & X for hexadecimal
	ft_printf("\nTest %%x\nThis thing %d long, should be %d\n", ft_printf("%x", 0), printf("%x", 0));
	ft_printf("\nTest %%X\nThis thing %d long, should be %d\n", ft_printf("%X", 0), printf("%X", 0));
	ft_printf("\nTest %%x\nThis thing %d long, should be %d\n", ft_printf("%x", 0), printf("%x", 0));
	ft_printf("\nTest %%X\nThis thing %d long, should be %d\n", ft_printf("%X", 0), printf("%X", 0));

	// test with smallest int
	ft_printf("\nNow smallest int\n");

	// d & i for ints
	ft_printf("\nTest %%d\nThis thing %d long, should be %d\n", ft_printf("%d", INT_MIN), printf("%d", INT_MIN));
	ft_printf("\nTest %%i\nThis thing %d long, should be %d\n", ft_printf("%i", INT_MIN), printf("%i", INT_MIN));

	// empty string
	ft_printf("\nNow empty string\n");

	// s for strings
	ft_printf("\nTest %%s\nThis thing %d long, should be %d\n", ft_printf("%s", ""), printf("%s", ""));

	// test with NULL PTR

	// s for strings
	ft_printf("\nTest %%s\nThis thing %d long, should be %d\n", ft_printf("%s", NULL), printf("%s", NULL));

	// p for pointers 
	ft_printf("\nTest %%p\nThis thing %d long, should be %d\n", ft_printf("%p", NULL), printf("%p", NULL));

	// p for pointers 
	ft_printf("\nTest %%p with words around\nThis thing %d long, should be %d\n", ft_printf("hello%phello", NULL), printf("hello%phello", NULL));

	// series of conversions
	ft_printf("\nTest %%cspdiuxX with words around\nThis thing %d long, should be %d\n", ft_printf("h%%e%d%s%sllo%phello", 212, "Hello", "Hello", NULL), printf("h%%e%d%s%sllo%phello", 212, "Hello", "Hello", NULL));
}
