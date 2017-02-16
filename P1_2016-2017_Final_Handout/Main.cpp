#include "SimpleUnitTest.h"
#include "Exercises.h"


int main()
{
	// Final Exam P1 2016-2017 ----------------------------------
	printf("Tests for Final Exam P1 2016-2017\n");
	printf("Student: ENTER YOUR NAME HERE\n");

	printf("Exercise 1 -----------------------------------------------------\n");
    int is_seven_prime = is_prime(7);
	TEST("Exercise 1", is_seven_prime);

	printf("Exercise 2 -----------------------------------------------------\n");
    char hello_world[] = "hello world";
	int num_words = capitalize_first_letter_and_count_words(hello_world);
    TEST("Exercise 2",
        hello_world[0]  == 'H' &&
        hello_world[1]  == 'e' &&
        hello_world[2]  == 'l' &&
        hello_world[3]  == 'l' &&
        hello_world[4]  == 'o' &&
        hello_world[5]  == ' ' &&
        hello_world[6]  == 'W' &&
        hello_world[7]  == 'o' &&
        hello_world[8]  == 'r' &&
        hello_world[9]  == 'l' &&
        hello_world[10] == 'd' &&
        num_words == 2
        );

	printf("Exercise 3 -----------------------------------------------------\n");
	char board[4][4] = {
		{'-','-','-','-'},	//  ---->y
		{'-','-','-','-'},	// |
		{'-','-','-','-'},	// V
		{'-','-','-','-'}	// x
	};
    explosion(&board[0][0], 1, 2, 4, 4);

	TEST("Exercise 3",
       board[0][0] == '-' &&
       board[0][1] == '-' &&
       board[0][2] == '*' &&
       board[0][3] == '-' &&
       board[1][0] == '*' &&
       board[1][1] == '*' &&
       board[1][2] == '*' &&
       board[1][3] == '*' &&
       board[2][0] == '-' &&
       board[2][1] == '-' &&
       board[2][2] == '*' &&
       board[2][3] == '-' &&
       board[3][0] == '-' &&
       board[3][1] == '-' &&
       board[3][2] == '*' &&
       board[3][3] == '-'
       );

    printf("\tBoard after explosion: \n");
    for (int i = 0; i < 16; ++i)
    {
        int x = i / 4;
        int y = i % 4;

        if(y == 0)
            printf("\t");

        printf("%c ", board[x][y]);

        if(y == 3)
            printf("\n");
    }

	PRINT_TEST_REPORT();

	getchar();
	return 0;
}
