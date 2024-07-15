#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *c)
{
	int	result;

	result = 0;
	while (*c != '\0')
	{
		result = result *10 + *c - '0';
		c++;
	}
	return (result);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + 48);
}

int	main (int argc, char *argv[])
{
	int	i;
	int	mult;

	if (argc == 2)
	{
		i = 1;
		mult = ft_atoi(argv[1]);
		while (i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(mult);
			write(1, " = ", 3);
			ft_putnbr(i * mult);
			write(1, "\n", 1);
			i++;
		}
	}
	else
	{
		write(1, "\n", 1);
	}
}


