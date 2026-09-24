/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 15:30:18 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/22 22:31:24 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char	*str)
{
	if (!str)
		return ;
	while (*str)
		ft_putchar(*(str++));
	return ;
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_bubble_sort(char **argv, int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < n - 1)
	{
		j = 0;
		while (j < n - 1 - i)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
				ft_swap(&argv[j], &argv[j + 1]);
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc <= 1 || !argv)
		return (0);
	ft_bubble_sort(argv + 1, argc - 1);
	argv++;
	while (*argv)
	{
		ft_putstr(*argv);
		argv++;
	}
	return (0);
}
