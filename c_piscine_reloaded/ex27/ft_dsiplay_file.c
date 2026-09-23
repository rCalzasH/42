/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dsiplay_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 16:11:14 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/23 16:11:21 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 4096

static void	ft_putstr_fd(char *str, int fd)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	write(fd, str, len);
}

static int	ft_display_file(char *path)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE];

	fd = open(path, O_RDONLY);
	if (fd < 0)
		return (0);
	ret = read(fd, buf, BUF_SIZE);
	while (ret > 0)
	{
		write(1, buf, ret);
		ret = read(fd, buf, BUF_SIZE);
	}
	close(fd);
	return (ret == 0);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr_fd("File name missing.\n", 2);
		return (1);
	}
	if (argc > 2)
	{
		ft_putstr_fd("Too many arguments.\n", 2);
		return (1);
	}
	if (!ft_display_file(argv[1]))
	{
		ft_putstr_fd("Cannot read file.\n", 2);
		return (1);
	}
	return (0);
}