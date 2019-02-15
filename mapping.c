/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapping.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 16:08:49 by ehaggon           #+#    #+#             */
/*   Updated: 2019/02/15 16:50:06 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int number_of_hash(char *str)
{
	int index;
	int j;

	index = 0;
	j = 0;

	while (str[index] != '\0')
	{
		if (str[index] == '#')
			j++;
		index++;
	}
	j = sqrt_hash(j);
	coloring(str);
	return (j);
}

int sqrt_hash(int hash)
{
	int a;

	a = 0;
	while ((a * a) < hash)
	{
		a++;
	}
	return(a);
}

char *coloring(char *str)
{
	int index;
	int j;
	int m;

	index = 0;
	j = 0;
	m = 'A';
	while (str[index] != '\0')
	{
		if (j < 4)
		{
			if (str[index] == '#')
			{
				str[index] = m;
				j++;
			}
		}
		else
		{
			j = 0;
			m++;
		}
		printf("%c", str[index]);
		index++;
	}
	return (str);
}

char *createmapp(int a, char *str)
{
	char *map;
	return("hello");
}

char *createorder(int a, char *str)
{
	return(str);
}


