#include <unistd.h>

int	has_char(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

void	union_str(char *str1, char *str2)
{
	char	checked[256] = {0};
	int		i;

	i = 0;
	while (*str1)
	{
		if (!has_char(checked, *str1))
		{
			checked[i] = *str1;
			write (1, str1, 1);
			i++;
		}
		str1++;
	}
	while (*str2)
	{
		if (!has_char(checked, *str2))
		{
			checked[i] = *str2;
			write (1, str2, 1);
			i++;
		}
		str2++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		union_str(argv[1], argv[2]);
	}
	write(1, "\n", 1);
}
