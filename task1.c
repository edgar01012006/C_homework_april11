#include <stdio.h>
#include <string.h>
#define SIZE 20


int string_length(const char* str)
{
	int cnt = 0;

	while (*str != '\n')
	{
		++str;
		++cnt;
	}

	return cnt;
}

int main()
{
	char arr[SIZE];
	fgets(arr, SIZE, stdin);

	printf("length = %d\n", string_length(arr));

	return 0;
}