/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_params.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fmoenne- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/13 20:26:28 by fmoenne-     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/16 16:41:06 by fmoenne-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'y')
			ft_putchar(str[i] + 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	(void)argc;
	ft_putstr(argv[1]);

	return (0);
}
