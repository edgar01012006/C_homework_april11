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

void swap(char* c1, char* c2)
{
	char c = *c1;
	*c1 = *c2;
	*c2 = c;
}

void reverse_string(char* str)
{
	int len = string_length(str);
	int cnt = len - 1;

	for (int i = 0; i < len / 2; ++i)
	{
		swap(&str[i], &str[cnt]);
		--cnt;
	}
}

int main()
{
	char arr[SIZE];
	fgets(arr, SIZE, stdin);
	reverse_string(arr);

	printf("%s", arr);
	
	return 0;
}