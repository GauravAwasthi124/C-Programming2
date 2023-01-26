#include <stdio.h>
#include <stdlib.h>
int main()
{

	int* p;
	int n, i;
	n = 5;
	printf("Enter number of elements: %d\n", n);
	
	p = (int*)calloc(n, sizeof(int));
	if (p == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
		printf("Memory successfully allocated using calloc.\n");
		for (i = 0; i < n; ++i) {
			p[i] = i + 1;
			printf("%d, ", p[i]);
		}
        n = 10;
        printf("\n\nEnter the new size of the array: %d\n", n);
  
        // Dynamically re-allocate memory using realloc()
        p = realloc(p, n * sizeof(int));

        printf("Memory successfully re-allocated using realloc.\n");
        for (int i = 0; i < n; ++i) {
            p[i] = i + 1;
            printf("%d, ", p[i]);
        }
	return 0;
}



