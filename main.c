#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE_DEF 10


int main() {
	int a = 10;
	int c = 20;
	int * b = &c;

	printf("Valeur de a : %d\n", a);
	printf("Address memory (stack) de a : %p\n", &a);

	*b = 200;

	printf("Valeur de b : %d\n", *b);

	printf("Valeur de c : %d\n", c);
	printf("Valeur de c : %d\n", c);

	printf("Address memory (stack) de b : %p\n", &b);

	// Memory allocation on heap with malloc
	int i;
	int n = BUFFER_SIZE_DEF;
	int * tab;

	printf("\n=====================\n");
	printf("Valeur de tab: %p %d\n", &tab, *tab);

	tab = malloc(sizeof *tab * n);

	if (tab == NULL) {
		printf("Error malloc");
		return (-1);
	}

	printf("Valeur de tab: %p %d\n", &tab, *tab);
	printf("=====================\n\n");

	tab[0] = 22;
	*(tab + 1) = 44;
	*(tab + 2) = 55;
	tab[3] = 66;
	tab[4] = 77;

	for (i = 0; i < BUFFER_SIZE_DEF; i++) {
		printf("tab[%d], %d\n", i, tab[i]);
	}

	printf("\nBUFFER_SIZE_DEF %d\n", BUFFER_SIZE_DEF);
	//printf("tab %d\n", *tab);

	free(tab);

	//printf("tab %d\n", *tab);

    return 0;
}
