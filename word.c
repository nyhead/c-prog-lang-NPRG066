
/*
 * Read characters from the standard input and print them out.
 */
#include <stdio.h>

int
main(void)
{
	int c;
    int count = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n') {

			count++;
            continue;
        }
		//printf("%c", c);
	}
    printf("%d\n", count);
}