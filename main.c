#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

int				main()
{
	char	str[] = "lorem ipsum dolor sit amet";
	//char	*str_dup;
	
	printf("%s", ft_strdup(str));

	return (0);
}
