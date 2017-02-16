#include "Exercises.h"

// Exercise 1
int is_prime(int number)
{
	int counter = 0;
	int counter_b = 0;

	while (counter != number)
	{
		counter++;

		if (number % counter == 0)
		{
			counter_b++;
		}
	}

	if (counter_b == 2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
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
	int a = 0;
	int num_words = 1;
	if (sentence != nullptr && sentence[0] != '\0')
	{
		while (sentence[a] != '\0')
		{
			sentence[0] = toupper(sentence[0]);
			if (sentence[a] == ' ')
			{
				sentence[a + 1] = toupper(sentence[a + 1]);
				num_words++;
			}

			a++;
		}
	}
    return num_words;
}

// Exercise 3
void explosion(char* board, uint x, uint y, uint num_rows, uint row_length)
{

	int counter = 0;
		while (counter != 4)
		{
			board[y+row_length*counter] = '*';
			counter++;
			
	    }
		counter = 0;
		while (counter != 4)
		{
			board[row_length*x + counter] = '*';
			counter++;
		}
}