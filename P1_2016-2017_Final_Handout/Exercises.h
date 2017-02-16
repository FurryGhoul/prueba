#ifndef _EXERCISES_
#define _EXERCISES_

#include <stdio.h>

typedef unsigned int uint;

// Exercise 1
int is_prime(int number);

// Exercise 2
int islower(const char c);
char toupper(const char c);
int strlen(const char* str);
int capitalize_first_letter_and_count_words(char* sentence);

// Exercise 3
struct Monster
{
	uint hp;
	uint lvl;
};
void lv5_death(Monster* monsters, uint monsters_amount);

// Exercise 4
void explosion(char* board, uint x, uint y, uint num_rows, uint row_length);

#endif 



