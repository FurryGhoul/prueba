#include "Exercises.h"

// Exercise 1
int is_prime(int number)
{
	return 0;
}

// Exercise 2
int islower(char c)
{
	if (c < 123 && c > 96)
	{
		return 1;
	}
	return 0;
}

char toupper(const char c) 
{
	if (islower(c))
	{
		return c - 32;
	}
	return c;
}

int strlen(const char* str)
{
    int count = 0;
    if (str != nullptr)
    {
        while (str[count] != '\0')
        {
            count++;
        }
    }
    return count;
}

int capitalize_first_letter_and_count_words(char* sentence)
{
    return 0;
}

// Exercise 3
void explosion(char* board, uint x, uint y, uint num_rows, uint row_length)
{
}