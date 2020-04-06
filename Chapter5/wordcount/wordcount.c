// wordcount.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#define STOP '.'

int main()
{
	int n_char = 0;
	int n_word = 0;
	int n_line = 0;
	int ch;
	bool word_flag = false;
	bool line_flag = false;

	while ((ch = getchar()) != STOP)
	{
		if (!isspace(ch))
		{
			n_char++;
		}

		if (!isspace(ch) && !word_flag)
		{
			n_word++;
			word_flag = true;
		}

		if (!isspace(ch) && !line_flag)
		{
			n_line++;
			line_flag = true;
		}

		if (isspace(ch))
		{
			word_flag = false;
		}

		if (ch == '\n')
		{
			line_flag = false;
		}
	}

	printf("%d %d %d", n_char, n_word, n_line);

	return 0;
}

