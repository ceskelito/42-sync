#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

int				main()
{
	char	*s = "1234a5678a90a1111";
	char	c = 'a';
	char	**spl = ft_split(s, c);
	
	int i = 0;
	while(i < 4)
	{
		printf("%s\n", spl[i]);
		i++;
	}

	return (0);
}
