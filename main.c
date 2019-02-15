/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 14:53:54 by ehaggon           #+#    #+#             */
/*   Updated: 2019/02/15 16:01:10 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "lib_func.c"
#include "ver12.c"
#include "ValidForm.c"
#include "ValidNorm.c"

int main(int argc, char **argv)
{
	int fd;
	char buf[550 + 1];
	if ((fd = open(argv[1], O_RDONLY)) == -1)
	{
			return (write(1, "error\n", 6));
	}
	buf[read(fd, buf, (550 + 1))] = '\0';
	close (fd);

	if (cut_figure(buf) == 0)
	{
		printf("%s\n", "Invalid field");
		return(0);
	}

	printstruct(Figure1);

	map_insert(Figure1);

	return (0);
}
