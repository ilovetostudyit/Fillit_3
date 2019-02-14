
/*struct Figures {
	int figure_vertical_line;
	int figure_horizontal_line;
	int figure_box;
	int figure_l_up_left;
	int figure_l_up_right;
	int figure_l_down_right;
	int figure_l_down_left;
	int figure_l_right_up;
	int figure_l_left_up;
	int figure_l_right_down;
	int figure_l_left_down;
	int figure_t_up;
	int figure_t_down;
	int figure_t_left;
	int figure_t_right;
	int figure_z_vert_right;
	int figure_z_vert_left;
	int figure_z_hor_right;
	int figure_z_hor_left;
	int id;
};

struct Figures Figure1;*/

int number_of_figures(char *str)
{
	int index;
	int j;
	int i;

	index = 0;
	j = 0;

	while (str[index] != '\0')
	{
		while (str[i] != '\n' && str[i + 1] != '\n')
		{
			j++;
		}
		index++;
	}
	return (j);
}

/*	Define All figures	*/
/*						*/
/*						*/
/*						*/
/* 						*/

int vertical_line(char *str)
{
	int i;
	int vertical_lines;

	vertical_lines = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#' && str[i + 5] == '#' && str[i + 10] == '#' && str[i + 15] == '#')
		{
			vertical_lines++;
		}
		i++;
	}
	return (vertical_lines);
}

char	insert_vertical_line(char *str, int cur)
{
	int i;
	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	c = 0;
	i = 0;
//	while (Figure1.figure_vertical_line > 0)
	while (str[i] != '\0')
	{
		if (str[i] == '.')
			if (str[i + 5 + a] == '.')
				if (str[i + 10 + b] == '.')
					if (str[i + 15 + c] == '.')
					{
						str[i] = cur;
						str[i + 5 + a] = cur;
						str[i + 10 + b] = cur;
						str[i + 15 + c] = cur;
						break;
					}
		i++;
	}
	return (*str);
}


int horizontal_line(char *str)
{
	int i;
	int horizontal_lines;

	horizontal_lines = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#' && str[i + 1] == '#' && str[i + 2] == '#' && str[i + 3] == '#')
		{
			horizontal_lines++;
		}
		i++;
	}
	return (horizontal_lines);
}

int 	box(char *str)
{
	int i;
	int box;

	box = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#' && str[i + 1] == '#' && str[i + 5] == '#' && str[i + 6] == '#')
		{
			box++;
		}
		i++;
	}
	return (box);
}

/*	L	*/
/*		*/
/*		*/
/*		*/

int		l_up_left(char *str)
{
	int i;
	int l_up_left;

	i = 0;
	l_up_left = 0;

	while (str[i] != '\0')
	{
		if (str[i] == '#' && str[i + 1] == '#' && str[i + 6] == '#' && str[i + 11] == '#')
		{
			l_up_left++;
		}
		i++;
	}
	return (l_up_left);
}

int        l_up_right(char *str)
{
    int i;
    int l_up_right;

    i = 0;
    l_up_right = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '#' && str[i + 1]  == '#' && str[i + 5] == '#' && str[i + 10] == '#')
        {
            l_up_right++;
        }
        i++;
    }
    return (l_up_right);
}

int        l_down_right(char *str)
{
    int i;
    int l_down_right;

    i = 0;
    l_down_right = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '#' && str[i + 5] == '#' && str[i + 10] == '#' && str[i + 11] == '#')
        {
            l_down_right++;
        }
        i++;
    }
    return (l_down_right);
}

int        l_down_left(char *str)
{
    int i;
    int l_down_left;

    i = 0;
    l_down_left = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '#' && str[i + 5] == '#' && str[i + 9] == '#' && str[i + 10] == '#')
        {
            l_down_left++;
        }
        i++;
    }
    return (l_down_left);
}

int        l_right_up(char *str)
{
    int i;
    int l_right_up;

    i = 0;
    l_right_up = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '#' && str[i + 3] == '#' && str[i + 4] == '#' && str[i + 5] == '#')
        {
            l_right_up++;
        }
        i++;
    }
    return (l_right_up);
}

int        l_left_up(char *str)
{
    int i;
    int l_left_up;

    i = 0;
    l_left_up = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '#' && str[i + 5] == '#' && str[i + 6] == '#' && str[i + 7] == '#')
        {
            l_left_up++;
        }
        i++;
    }
    return (l_left_up);
}

int        l_right_down(char *str)
{
    int i;
    int l_right_down;

    i = 0;
    l_right_down = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '#' && str[i + 1] == '#' && str[i + 2] == '#' && str[i + 7] == '#')
        {
            l_right_down++;
        }
        i++;
    }
    return (l_right_down);
}

int        l_left_down(char *str)
{
    int i;
    int l_left_down;

    i = 0;
    l_left_down = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '#' && str[i + 1] == '#' && str[i + 2] == '#' && str[i + 5] == '#')
        {
            l_left_down++;
        }
        i++;
    }
    return (l_left_down);
}

/*	T	*/
/*		*/
/*		*/
/*		*/

int        t_down(char *str)
{
    int i;
    int t_down;

    i = 0;
    t_down = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '#' && str[i + 1] == '#' && str[i + 2] == '#' && str[i + 6] == '#')
        {
            t_down++;
        }
        i++;
    }
    return (t_down);
}

int        t_up(char *str)
{
    int i;
    int t_up;

    i = 0;
    t_up = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '#' && str[i + 4] == '#' && str[i + 5] == '#' && str[i + 6] == '#')
        {
            t_up++;
        }
        i++;
    }
    return (t_up);
}

int        t_left(char *str)
{
    int i;
    int t_left;

    i = 0;
    t_left = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '#' && str[i + 4] == '#' && str[i + 5] == '#' && str[i + 10] == '#')
        {
            t_left++;
        }
        i++;
    }
    return (t_left);
}

int        t_right(char *str)
{
    int i;
    int t_right;

    i = 0;
    t_right = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '#' && str[i + 5] == '#' && str[i + 6] == '#' && str[i + 10] == '#')
        {
            t_right++;
        }
        i++;
    }
    return (t_right);
}

/*	Z	*/
/*		*/
/*		*/
/*		*/

int        z_hor_left(char *str)
{
    int i;
    int z_hor_left;

    i = 0;
    z_hor_left = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '#' && str[i + 1] == '#' && str[i + 6] == '#' && str[i + 7] == '#')
        {
            z_hor_left++;
        }
        i++;
    }
    return (z_hor_left);
}

int        z_hor_right(char *str)
{
    int i;
    int z_hor_right;

    i = 0;
    z_hor_right = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '#' && str[i + 1] == '#' && str[i + 4] == '#' && str[i + 5] == '#')
        {
            z_hor_right++;
        }
        i++;
    }
    return (z_hor_right);
}

int        z_vert_right(char *str)
{
    int i;
    int z_vert_right;

    i = 0;
    z_vert_right = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '#' && str[i + 4] == '#' && str[i + 5] == '#' && str[i + 9] == '#')
        {
            z_vert_right++;
        }
        i++;
    }
    return (z_vert_right);
}

int        z_vert_left(char *str)
{
    int i;
    int z_vert_left;

    i = 0;
    z_vert_left = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '#' && str[i + 5] == '#' && str[i + 6] == '#' && str[i + 11] == '#')
        {
            z_vert_left++;
        }
        i++;
    }
    return (z_vert_left);
}



////////////////////////////////////
////////////////////////////////////
////////////////////////////////////
////////////////////////////////////
/////////////////////////////////////



char	map(char *str, int square)
{
	int i;
	int j;
	int k;

	k = square;
	j = square;
	i = 0;
	while (square > 0)
	{
		while (j > 0)
		{
			str[i] = '.';
			i++;
			j--;

		}
		j = k;
		str[i] = '\n';
		square--;
		i++;
	}
	str[i] = '\0';
	return (*str);
}


int		define_figure(char *str)
{

	if (vertical_line(str) > 0)
	{
//		Figure1.figure_vertical_line = Figure1.figure_vertical_line + vertical_line(str);
		return(1);
	}
	if (horizontal_line(str) > 0)
		Figure1.figure_horizontal_line = Figure1.figure_horizontal_line + horizontal_line(str);
	if (box(str) > 0)
		Figure1.figure_box = Figure1.figure_box + box(str);
	if (l_up_left(str) > 0)
		Figure1.figure_l_up_left = Figure1.figure_l_up_left + l_up_left(str);
	if (l_up_right(str) > 0)
		Figure1.figure_l_up_right = Figure1.figure_l_up_right + l_up_right(str);
	if (l_down_right(str) > 0)
		Figure1.figure_l_down_right = Figure1.figure_l_down_right + l_down_right(str);
	if (l_down_left(str) > 0)
		Figure1.figure_l_down_left = Figure1.figure_l_down_left + l_down_left(str);
	if (l_right_up(str) > 0)
		Figure1.figure_l_right_up = Figure1.figure_l_right_up + l_right_up(str);
	if (l_left_up(str) > 0)
        Figure1.figure_l_left_up = Figure1.figure_l_left_up + l_left_up(str);
	if (l_right_down(str) > 0)
	   	Figure1.figure_l_right_down = Figure1.figure_l_right_down + l_right_down(str);
	if (l_left_down(str) > 0)
		Figure1.figure_l_left_down = Figure1.figure_l_left_down + l_left_down(str);
	if (t_down(str) > 0)
		Figure1.figure_t_down = Figure1.figure_t_down + t_down(str);
	if (t_up(str) > 0)
		Figure1.figure_t_up = Figure1.figure_t_up + t_up(str);
	if (t_left(str) > 0)
		Figure1.figure_t_left = Figure1.figure_t_left + t_left(str);
	if (t_right(str) > 0)
		Figure1.figure_t_right = Figure1.figure_t_right + t_right(str);
	if (z_hor_left(str) > 0)
		Figure1.figure_z_hor_left = Figure1.figure_z_hor_left + z_hor_left(str);
	if (z_hor_right(str) > 0)
		Figure1.figure_z_hor_right = Figure1.figure_z_hor_right + z_hor_right(str);
	if (z_vert_right(str) > 0)
		Figure1.figure_z_vert_right = Figure1.figure_z_vert_right + z_vert_right(str);
	if (z_vert_left(str) > 0)
		Figure1.figure_z_vert_left = Figure1.figure_z_vert_left + z_vert_left(str);
	return (0);
}


char	solve(char *str, int number)
{
	int i;
	int cur;

	cur = 'A';
	i = 0;
	if (number == 1)
	{
		insert_vertical_line(str, cur);
		cur++;
	}
	return (*str);
}


char	insert_figure(int number)
{
	int square;
	int line;
	int needline;
	char str[1000];

	square = 4;
	needline = 4;
	line = square + 1;

	map(str, square);
	printf("test MAPP: \n%s\n", str);

	solve(str, number);
	printf("test MAPP after: \n%s\n", str);

	return (*str);
}






int        cut_figure(char *str)
{
    int i;
    int start;
    int end;
	int number_of_figure;

    i = 0;
    end = 0;
    while (str[i] != '\0')
    {
        if (i == 20)
        {
            end = i;
            start = end - 20;
            number_of_figure = define_figure((ft_strsub(str, start, 20)));
			insert_figure(number_of_figure);
			printf("test number: %d\n", number_of_figure);
        }
        if (i == (end + 21))
        {
            end = i;
            start = end - 20;
            define_figure((ft_strsub(str, start, 20)));
        }
        i++;
    }
    return (0);
}

void	printstruct(struct Figures Figure1)
{

	printf("vertical line:		%d\n", Figure1.figure_vertical_line);
	printf("horizontal line:	%d\n", Figure1.figure_horizontal_line);
	printf("box:			%d\n", Figure1.figure_box);
	printf("l_up_left:		%d\n", Figure1.figure_l_up_left);
	printf("l_up_right:		%d\n", Figure1.figure_l_up_right);
    printf("l_down_right:		%d\n", Figure1.figure_l_down_right);
    printf("l_down_left:		%d\n", Figure1.figure_l_down_left);
    printf("l_right_up:		%d\n", Figure1.figure_l_right_up);
    printf("l_left_up:		%d\n", Figure1.figure_l_left_up);
    printf("l_right_down:		%d\n", Figure1.figure_l_right_down);
    printf("l_left_down:		%d\n", Figure1.figure_l_left_down);
    printf("t_up:			%d\n", Figure1.figure_t_up);
    printf("t_down:			%d\n", Figure1.figure_t_down);
    printf("t_left:			%d\n", Figure1.figure_t_left);
    printf("t_right:		%d\n", Figure1.figure_t_right);
    printf("z_vert_right:		%d\n", Figure1.figure_z_vert_right);
    printf("z_vert_left:		%d\n", Figure1.figure_z_vert_left);
    printf("z_hor_right:		%d\n", Figure1.figure_z_hor_right);
    printf("z_hor_left:		%d\n", Figure1.figure_z_hor_left);
}

void	map_insert(struct Figures Figure1)
{
	int i;
	int square;
	int len;
	int a;
	int b;
	int c;
	int d;
	int line;
	char str[1000];
	int needline;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	needline = 4;
	printf("test1: %s\n", str);
	square = 4;
	line = square + 1;
	i = 0;

	map(str, square);
	printf("test2: \n%s\n", str);
	while (Figure1.figure_vertical_line > 0)
	{
		if (needline == line)
		{
			map (str, (square + 1));
			i = 0;
			square++;
			line = line + 2;
			a = a + 1;
			b = b + 2;
			c = c + 3;
			str[i] = '#';
			str[i + 1] = '#';
			str[i + 2] = '#';
			str[i + 3] = '#';
			str[i + 4] = '#';
			str[i + 6] = '#';
			str[i + 7] = '#';

		}
		if (str[i] == '.')
		{
			str[i] = '#';
			str[i + 5 + a] = '#';
			str[i + 10 + b] = '#';
			str[i + 15 + c] = '#';
			Figure1.figure_vertical_line--;
		}
		if (str[i] == '\n')
		{
			i++;
			line = line - 1;
		}
		if (str[i] == '#')
		{
			i++;
		}
		printf("function: \n%s", str);
	}

	printf("test4:\n%s\n", str);

}



/*
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

	cut_figure(buf);

	printstruct(Figure1);


	map_insert(Figure1);

	return (0);
}
*/
