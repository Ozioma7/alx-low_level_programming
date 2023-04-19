#include <stdlid.h>
#include <stdio.h>
#include "main.h"

/**
 * wordcount - count no of words
 * @stng: pointer to a string
 * Return: Result
 */

int wordcount(char *stng)
{
	int flag, cnt, wrd;

	wrd = 0;

	for (cnt = 0; stng[cnt] != '\0'; cnt++)
	{
		if (stng[cnt] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			wrd;
		}

	}
	return (wrd);
}

/**
 * strtow - function that splits a string into words
 * @str: string
 * Return: Splitted Words
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int a, j = 0, lens = 0, word, ct = 0, start, end;

	while (*(str + lens))
		lens++;
	word = wordcount(str);

	if (word == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (word + 1));
	if (matrix == NULL)
		return (NULL);
	for (a = 0; a <= lens; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (ct)
			{
				end = a;
				tmp = (char *) malloc(sizeof(char) * (ct + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[j] = tmp - ct;
				j++;
				ct = 0;
			}
		}
		else if (ct++ == 0)
		start = a;
	}
	matrix[j] = NULL;
	return (matrix);
}
