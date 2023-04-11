#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int o, m, p = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (o = 0; o < ac; o++)
	{
		for (m = 0; av[o][m]; m++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (o = 0; o < ac; o++)
	{
	for (m = 0; av[o][m]; m++)
	{
		str[p] = av[o][m];
		p++;
	}
	if (str[p] == '\0')
	{
		str[p++] = '\n';
	}
	}
	return (str);
}
