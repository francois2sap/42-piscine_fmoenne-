/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_alphabet.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fmoenne- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/02 21:29:20 by fmoenne-     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/04 13:29:16 by fmoenne-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int i;

	i = 97;
	while (i <= 122)
	{
		write(1, &i, 1);
		i++;
	}
}