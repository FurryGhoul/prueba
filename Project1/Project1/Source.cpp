#include <stdio.h>
#include "header.h"
int main()
{

	printf("Hello Lucas!");
	printf("\nHello Drofiak!! Voy a crear un header y una funcioncita, verás que bien se va a dar\n Pon un numerico, que yo le sumo 3:");
	int a = 0;
	scanf_s("%i", &a);
	a= suma_tres(a);
	printf("\nTu numerico mas 3 da %i", a);

	printf("Hello Paquete!");

	getchar();
	getchar();
	return 0;
}
