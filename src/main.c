#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int areas[] = { 10, 12, 13, 14, 20 };
	char name[] = "Zed";
	char full_name[] = { "Zed A. Shaw" };

	// WARNING: On some systems you may have to change the
	// %ld in this code to a %u since it will use unsigned ints
	printf("The size of an int: %zu\n", sizeof(int));
	printf("The size of areas (int[]): %zu\n", sizeof(areas));
	printf("The number of ints in areas: %zu\n",
			sizeof(areas) / sizeof(int));
	printf("The first area is %d, the 2nd %d.\n", areas[0], areas[1]);

	printf("The size of a char: %zu\n", sizeof(char));
	printf("The size of name (char[]): %zu\n", sizeof(name));
	printf("The number of chars: %zu\n", sizeof(name) / sizeof(char));

	printf("The size of full_name (char[]): %zu\n", sizeof(full_name));
	printf("The number of chars: %zu\n",
			sizeof(full_name) / sizeof(char));

	full_name[12] = 'X';

	printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

	return EXIT_SUCCESS;
}
