#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

/*
MidTerm 2 Examination for UPC's Computer Programming 1 - 3 Dec 2015 -
Time: 2 hours
Submission: When you are finish upload the result in a zip named "lastname_name.zip" to Agora website
Special rules: You are free to use your notes and the C book
The compiled solution is located in the same folder "solution.exe"
*/

int main()
{
	printf("MIDTERM 2 EXAMINATION FOR UPC'S COMPUTER PROGRAMMING 1\n");

	// Exercise 1 (3 points): Create a function in ANOTHER FILE that
	// concates two strings. It should return a new string allocated dynamically.
	// You cannot use strcpy or strcat functions.

	printf("\n--- Exercise 1 ---");

	char first_string[80];
	char second_string[80];
	char* result = NULL;

	printf("\nInsert first word: ");
	scanf_s("%s", first_string, 80);

	printf("\nInsert second word: ");
	scanf_s("%s", second_string, 80);

	result = NULL; // Call your function instead

	if(result != NULL)
	{
		printf("\nThe concatenated string is %s", result);
		free(result);
	}

	// Exercise 2 (3 points): The player is lost in a dungeon!
	// Walls are represented by '#' and the player with '@'. The exit of
	// the dungeon is 'X'. Using the provided structures, make a function
	// that draws our map. It should output something like this:
	// ########
	// #@#    #
	// #    #X#
	// ########
	// Our function should be able to draw any map size and shape provided 
	// it follows the same format.

	printf("\n--- Exercise 2 ---");

	typedef struct
	{
		int x;
		int y;
	} position;

	char map[4][7] = {
		{'#', '#', '#', '#', '#', '#', '#', },
		{'#', ' ', '#', ' ', ' ', ' ', '#', },
		{'#', ' ', ' ', ' ', '#', 'X', '#', },
		{'#', '#', '#', '#', '#', '#', '#', }
	};
	position player = {1, 1};

	printf("\n");

	// Call your draw map function here

	getchar();

	// Exercise 3 (4 points): There is a party and a lot of dwarfs are invited
	// Create a generator of dwarfs to create a list of invitees. The resulting
	// list should contain the dwarf name, title and body measures.
	// Follow the structure provided, fill an array allocated dynamically with
	// random data (use the provided limits and names/ titles).
	// Make sure you free correctly all allocated memory when finished.

	printf("\n--- Exercise 3 ---");

	srand(time(NULL));

	typedef struct 
	{
		char* name_with_title;
		struct
		{
			float size; // between 1.1 to 1.5 meters
			float weight; // between 55.0 to 80.0 kg
		} body;
	} dwarf;

	char* names[13] = {"Thorin", "Fili", "Kili", "Balin", "Dwalin", "Oin", "Gloin", "Dori", "Nori", "Ori", "Bifur", "Bofur", "Bombur"};
	char* titles[13] = {
		"the strong", "the deaf", "the quick", 
		"the drunken", "the goblin killer", "the wise", 
		"the long bearded", "the head cracker", "the insane", 
		"the ugly", "the great", "the tamer", "the invincible"};

	int amount = 0;
	printf("\nHow many dwarfs do you want to generate ? ");
	scanf_s("%d", &amount);

	if(amount > 0)
	{
		// 1. allocate memory for all dwarfs
		// 2. Initialize all their data
		// 3. Print the list
		// 4. Free memory
	}

	// ---
	getchar();
	getchar();
	return 0;
}