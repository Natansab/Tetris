#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_cutcol(char *str)
{
	int i;
	int j;
	int k;

	while (str[0] == '.' && str[5] == '.' && str[10] == '.' && str[15] == '.')
	{
		j = 0;
		while (j < 16)
		{
			i = 0;
			while (i < 3)
			{
				str[i + j] = str[i + j + 1];
				i++;
			}
			j = j + 5;
		}
		k = 3;
		while (k < 19)
			{
				str[k] = '.';
				k = k + 5;
			}
	}
return (str);
}

char *ft_cutrow(char *str)
{
	int i;
	int j;
	int k;

	while (str[0] == '.' && str[1] == '.' && str[2] == '.' && str[3] == '.')
	{
		j = 0;
		while (j < 11)
		{
			i = 0;
			while (i < 4)
			{
				str[i + j] = str[i + j + 5];
				i++;
			}
			j = j + 5;
		}
		k = 15;
		while (k < 19)
			{
				str[k] = '.';
				k++;
			}
	}
return (str);
}

int *ft_tetrotocoord(int *tetro, char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == '#')
		{
			tetro[j] = i;
			j++;
		}
		i++;
	}
return (tetro);
}

int main(void)
{
	int i = 0;
	int *tetro;
	char str[300] = "....\n....\n..##\n..##\n\n....\n....\n..##\n..##\n\n....\n....\n..##\n..##\n\n....\n....\n..##\n..##\n";

	tetro = (int*)malloc(sizeof(int) * 4);
	//printf("strlen de str vaut : %lu\n", strlen(str));
	//puts(ft_cutcol(str));
	puts(str);
	puts("\n\n");
	tetro = ft_tetrotocoord(tetro, ft_cutcol(ft_cutrow(strndup(str + 42, 20))));
	printf("tetro vaut : {");
	while (i < 16)
	{
	printf("%i, ", tetro[i]);
	i++;
	}
	printf("}");
	//puts(ft_cutrow(ft_cutcol(str)));
	return (1);
}
