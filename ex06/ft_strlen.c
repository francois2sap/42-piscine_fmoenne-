/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlen.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fmoenne- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/05 10:44:34 by fmoenne-     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/08 15:40:39 by fmoenne-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	char	d;
	int		size;

	size = 0;
	while (str[size] != '\0')
	{
		d = str[size];
		size++;
	}
	return (size);
}

int		main(void)
{
	char str[] = "salut";

	printf("%d\n", ft_strlen(str));
	return (0);
}
