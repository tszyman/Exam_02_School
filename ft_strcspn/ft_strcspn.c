#include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i;

	i = 0;
	while (*s != '\0')
	{
		if (*s == *reject)
		{
			return(i);
		}
		i++;
		s++;
	}
	return (i);
}


// int	main(void)
// {
// 	char *c;

// 	c = "tomek";

// 	printf("outcome strspn: %lu\n", strspn("tomek", "top"));
// 	printf("outcome strcspn: %lu\n", strcspn("tomek", "mak"));
// }
