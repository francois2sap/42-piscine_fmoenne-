/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_rev_int_tab.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fmoenne- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/05 11:05:43 by fmoenne-     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/06 18:30:42 by fmoenne-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int tab2[size];
	int it;
	int it2;

	it = 0;
	it2 = size;
	while (tab[it] <= size)
	{
		tab2[it2] = tab[it];
		it++;
		it2--;
	}
}
