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

void replace_character(char* str, char old_char, char new_char)
{
	int len = string_length(str);

	for (int i = 0; i < len; ++i)
	{
		if (str[i] == old_char)
		{
			str[i] = new_char;
		}
	}
	
	return;
}

int main()
{
	char str[SIZE];
	fgets(str, SIZE, stdin);

	char old_char = '\0';
	scanf(" %c", &old_char);

	char new_char = '\0';
	scanf(" %c", &new_char);

	replace_character(str, old_char, new_char);

	printf("%s\n", str);

	return 0;
}