#include <stdio.h>
#include <string.h>
#define SIZE 20

int string_length(const char* str) // task1 function
{
	int cnt = 0;

	while (*str != '\n')
	{
		++str;
		++cnt;
	}

	return cnt;
}

int find_character(const char* str, char c)
{
	int len = string_length(str);

	for (int i = 0; i < len; ++i)
	{
		if (str[i] == c)
		{
			return i;
		}
	}

	return -1;
}

int main()
{
	char str[SIZE];
	fgets(str, SIZE, stdin);
	char ch = '\0';
	scanf(" %c", &ch);

	printf("index = %d\n", find_character(str, ch));

	return 0;
}
