/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   placing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 17:37:11 by ehaggon           #+#    #+#             */
/*   Updated: 2019/02/15 19:38:16 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int placing_figures(char *str, char *map, char *order, int size)
{
	char a;
	int i;

	a = order[0];
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && str[i] != a)
			i++;
		i++;
	}
	return(0);
}

int placing_figure(char *str, char *map, char a, int start, int size)
{
	int placed;
	int cordx;
	int cordy;
	int beforen;
	int cntr;

	placed = 0;
	cordx = 0;
	cordy = 0;
	beforen = 0;
	cntr = 0;
	while (placed < 4 || str[cntr] != '\0')
	{
		while (str[cntr] != '\0' && str[cntr] != a)
			cntr++;
		while (str[cntr] != '\n')
		{
			if (str[cntr] == a)
			{
				if (map[start] == '.')
				{
					map[start] = a;
					start++;
					placed++;
				}
				else
				{
					printf("%s", "ready to die");
					return(-1);
				}
			}
			str++;
			cordx++;
		}
		start = start + size - placed + 1;
		cntr++;
		cordx = 0 - ( 4 - cordx);
		cordy = cordx;
		while (beforen < 3 && str[cntr])
		{
			while(str[cntr] != '\n')
			{
				while (str[cntr] != '\n' && str[cntr] != a)
				{
					cntr++;
					cordx++;
				}
				if (str[cntr] == a)
				{
					if (map[start + cordx] == '.')
					{
						printf("start =%d\n", start);
						printf("cordx = %d\n", cordx);
						map[start + cordx] = a;
						placed++;
					}
					else
					{
						printf("%s", "ready to die");
						return(start);
					}
				}
				cordx++;
				cntr++;
			}
			cntr++;
			beforen++;
			cordx = cordy;
			start = start + size;
		}
		return(beforen);
	}
	return(0);
}
