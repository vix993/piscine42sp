/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:08:00 by dicisner          #+#    #+#             */
/*   Updated: 2019/10/22 23:29:33 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#define BUFF_SIZE 256
#include <unistd.h>
#include "bsq.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

t_boardparam	get_board_info(char *filename)
{
	int fd;
	int ret;
	char buf[BUFF_SIZE];
	int i;
	int line;
	int *res;
	t_boardparam param;
	
	res = malloc(sizeof(int) * 2);
	line = 0;
	param.width = 0;
	param.height = 0;
	param.empty = -1;
	param.obs = -1;
	param.fill = -1;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		printf("Error\n");
		return (param);
	}
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		i = 0;
		while (i < ret)
		{
			if (line == 0)
			{
				if (buf[i] >= '0' && buf[i] <= '9')
				{
					param.height = param.height * 10 + buf[i] - 48;
				}
				if (!(buf[i] <= '9' && buf[i] >= '0'))
				{
					if (param.empty == -1)
						param.empty = buf[i];
					else if (param.obs == -1)
						param.obs = buf[i];
					else if (param.fill == -1)
						param.fill = buf[i];
				}
			}
			if (line == 1 && buf[i] != '\n')
				param.width++;
			if (buf[i] == '\n')
				line++;
			i++;
		}
	}
	printf("%c\n%c\n%c\n", param.empty, param.obs, param.fill);
	if (close(fd) == -1)
	{
		printf("Error\n");
		return (param);
	}
	return (param);
}

int		min(int a, int b, int c)
{
	if (a < b && a < c)
		return (a);
	if (b < c)
		return (b);
	return (c);
}

int 	max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

int		get_max_square(int **arr, char c, int y, int x, t_boardparam param)
{
	int i;
	int j;

	if ((y == 0 || x == 0) && c == param.empty)
		return (1);
	else if (c == param.obs)
		return (0);
	else
		return (1 + min(arr[y - 1][x], arr[y][x - 1], arr[y - 1][x - 1]));
}

void	print_sol(int **arr, t_boardparam param, t_sol_vars t_sol);

int		**read_solve(char *filename, int **arr, t_boardparam param)
{
	int fd;
	int ret;
	char buf[BUFF_SIZE];
	int i;
	int j;
	int new_line;
	int *row;
	int num;
	int tmp_max;
	t_sol_vars sol_vars;

	new_line = 0;
	arr = malloc(sizeof(int*) * param.height);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		printf("Error\n");
		return (0);
	}
	j = 0;
	sol_vars.max = 0;
	sol_vars.x = -1;
	sol_vars.y = -1;
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		i = 0;
		while (i < ret)
		{
			if (new_line > 0 && buf[i] != '\n')
			{
				num = get_max_square(arr, buf[i], new_line - 1, j, param);
				tmp_max =  max(sol_vars.max, num);
				if (tmp_max > sol_vars.max)
				{
					sol_vars.max = tmp_max;
					sol_vars.x = j;
					sol_vars.y = new_line - 1;
				}
				arr[new_line - 1][j] = num;
				j++;
			}
			if (buf[i] == '\n' && new_line < param.height)
			{
				j = 0;
				new_line++;
				arr[new_line - 1] = malloc(param.width * sizeof(int));
			}
			i++;
		}
	}
	print_sol(arr, param, sol_vars);
	if (close(fd) == -1)
	{
		printf("Error\n");
		return (0);
	}
	return (arr);
}

void	print_sol(int **arr, t_boardparam param, t_sol_vars t_sol)
{
	int i;
	int j;

	i = 0;
	while (i < param.height)
	{
		j = 0;
		while (j < param.width)
		{
			if (arr[i][j] == 0)
				ft_putchar(param.obs);
			else if ((j > t_sol.x - t_sol.max && j <= t_sol.x) && (i > t_sol.y - t_sol.max && i <= t_sol.y))
				ft_putchar(param.fill);
			else
				ft_putchar(param.empty);
			j++;
		}
		printf("\n");
		i++;
	}
	// Precisamos passar param para chamadas de print_sol
}

void	print_board(int **arr, int size_x, int size_y)
{
	int i;
	int j;

	i = 0;
	while (i < size_y)
	{
		j = 0;
		while (j < size_x)
		{
			ft_putchar(arr[i][j] + '0');
			j++;
		}
		printf("\n");
		i++;
	}
}

void	solve(char *filename)
{
	int **arr;
	int *size;
	t_boardparam param;

	param = get_board_info(filename);
	arr = read_solve(filename, arr, param);
}

int 	main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			solve(argv[i]);
			i++;
		}
	}
	return (0);
}
