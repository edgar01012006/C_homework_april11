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

int compare_strings(const char* str1, const char* str2)
{
	int len1 = string_length(str1);
	int len2 = string_length(str2);
	if (len1 > len2 || len1 < len2)
	{
		return -1;
	}

	for (int i = 0; i < len1; ++i)
	{
		if (str1[i] != str2[i])
		{
			return -1;
		}
	}

	return 0;
}

int main()
{
	char str1[SIZE];
	char str2[SIZE];

	fgets(str1, SIZE, stdin);
	fgets(str2, SIZE, stdin);
	printf("%d\n", compare_strings(str1, str2));

	return 0;
}