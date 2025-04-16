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

void count_vowels_and_consonants(const char* str, int* vowels, int* consonants)
{
	int len = string_length(str);

	for (int i = 0; i < len; ++i)
	{
		switch (str[i])
		{
		case 'A':
			++*vowels;
			break;
		case 'a':
			++*vowels;
			break;
		case 'E':
			++*vowels;
			break;
		case 'e':
			++*vowels;
			break;
		case 'O':
			++*vowels;
			break;
		case 'o':
			++*vowels;
			break;
		case 'I':
			++*vowels;
			break;
		case 'i':
			++*vowels;
			break;
		case 'U':
			++*vowels;
			break;
		case 'u':
			++*vowels;
			break;
		default:
			if (str[i] > 'A' && str[i] <= 'Z')
			{
				++*consonants;
			}
			else if (str[i] > 'A' && str[i] <= 'z')
			{
				++* consonants;
			}
			break;
		}
	}
}

int main()
{
	int vowels = 0;
	int consonants = 0;
	char str[SIZE];
	fgets(str, SIZE, stdin);

	count_vowels_and_consonants(str, &vowels, &consonants);

	printf("vowels = %d, consonants = %d\n", vowels, consonants);

	return 0;
}