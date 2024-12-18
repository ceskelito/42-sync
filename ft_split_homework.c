/******************************************************************************

Il programma funziona correttamente eccetto:

-Mantiene il separatare all'inizio delle stringhe (tranne la prima).
-Quando libero il buff dice "free(): invalid pointer".
-Con più separatori di fila salva i suddetti in eccesso come stringhe.

*******************************************************************************/
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char **ft_split(char *s, char c)
{
	char	**splitted;
	char	*buff;
	int		*len;
	int		i;
	int		j;

	buff = calloc(strlen(s), sizeof(char));
	if(!buff)
		return (NULL);
	strcpy(buff, s);

	i = 0;
	j = 0;
	while(buff[i])
	{
		if(buff[i] == c)
		{
			if(i == 0)
			{
				buff++;
				continue;
			}
			j++;
		}
		i++;
	}

	len = calloc(j, sizeof(int));
	splitted = calloc(j, sizeof(char *));

	i = 0;
	j = 0;
	while(buff[i])
	{
		if(buff[i] == c)
		{
			if(i == 0)
			{
				buff++;
				continue;
			}
			len[j] = i;
			buff += i;
			i = 0;
			j++;
		}
		i++;
	}

	if(buff[i - 1] != c)
		len[j] = i;

	len[j + 1] = (-1);

	i = 0;
	while(len[i] > 0)
	{
		splitted[i] = calloc(len[i], sizeof(char));
		i++;
	}

	free(len);

	buff = calloc(strlen(s), sizeof(char));
	if (!buff)
		return (NULL);
	strcpy(buff, s);

	i = 0;
	j = 0;
	while(buff[i])
	{
		if(buff[i] == c)
		{
			if(i == 0)
			{
				buff++;
				continue;
			}
			strncpy(splitted[j], buff, i);
			buff += i;
			i = 0;
			j++;
		}
		i++;
	}

	if(buff[i - 1] != c)
			strncpy(splitted[j], buff, i);

	free(buff);

	return (splitted);
}

int				main()
{
	char	*s = "a1234aaa5678a90a1111a";
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
